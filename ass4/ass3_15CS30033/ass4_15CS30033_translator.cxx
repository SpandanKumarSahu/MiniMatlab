#include "ass6_12CS30006_translator.h"
#include "y.tab.h"
extern int yydebug;
extern char * yytext;

extern void yyerror(const char *);
extern int yylex();

// Variables

// count of temporary variables
int tempCount = 0;
// current symbol table
symTable * currentSymTab = new symTable();
// global symbol table
symTable * globalSymTab  = new symTable("ST (global)");
// the list of all quads to be generated by the program
quadList quad;

vector <string> strLabels;
map <string, int> uniqueLabels;


// define functions of struct type

void type::print(){
  switch(pType) {
  case (t_BOOL):
    printf("bool");
    return;
  case (t_CHAR):
    printf("char");
    return;
  case (t_INT):
    printf("int");
    return;
  case (t_DOUBLE):
    printf("double");
    return;
  case (t_ARR):
    printf("array(%d, ", size);
    next->print();
    printf(")");
    return;
  case (t_FUNC):
    printf("func");
    return;
  case (t_VOID):
    printf("void");
    return;
  case (t_PTR):
    printf("ptr(");
    next->print();
    printf(")");
    return;
  case (t_MATRIX):
    printf("matrix");
    return;
  default:
    printf("Error ! Unknown type found !\n");
    exit(-1);
  }
}

type::type(){}

type::type(primaryType p) {
  pType = p;
  size = 1;
  next = NULL;
  if(p <= t_DOUBLE)
    size = this->getSize();
}

type::type(const type &t) {
  type* ptr1 = (type*) this;
  type* ptr2 = (type*) &t;
  ptr1->pType = ptr2->pType;
  ptr1->size = ptr2->size;
  while(ptr2 != NULL) {
    ptr1->pType = ptr2->pType;
    ptr1->size = ptr2->size;
    ptr2 = ptr2->next;
    if(ptr2 == NULL)
      ptr1->next = NULL;
    else
      ptr1->next = new type_t();
    ptr1 = ptr1->next;
  }
  assert(ptr1 == NULL && ptr2 == NULL);
}

int type::getSize() {
  switch(pType) {
  case (t_INT):
    return SIZE_OF_INT;
  case (t_CHAR):
    return SIZE_OF_CHAR;
  case (t_VOID):
    return SIZE_OF_VOID;
  case (t_DOUBLE):
    return SIZE_OF_DOUBLE;
  case (t_FUNC):
    return SIZE_OF_FUNC;
  case (t_PTR):
    return SIZE_OF_PTR;
  case (t_BOOL):
    return SIZE_OF_BOOL;
  case (t_ARR):
    return size * next->getSize();
  case (t_MATRIX):
    return size * next->getSize();
  default:
    yyerror("Unknown type");
    exit(1);
  }
}

// other function definations

bool areEqual(type *t1, type *t2) {
  type *ptr1 = t1;
  type *ptr2 = t2;
  while(ptr1 != NULL and ptr2 != NULL) {
    if(ptr1->pType != ptr2->pType)
      return false;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  if(ptr1 == NULL && ptr2 == NULL)
    return true;
  else {
    yyerror("Incompatible types");
    exit(1);
    return false;
  }
}

// Symbol Entry Definitions

symEntry::symEntry(string s) {
  nestedTable = NULL;
  wasInitialised = false;
  scope = s;
}


void symEntry::print() {
  printf("%10s\t", this->name.c_str());
  printf("\t");
  if(this->wasInitialised) {
    switch(this->t->pType) {
    case (t_INT):
      printf("%5d", this->init.intVal);
      break;
    case (t_CHAR):
      printf("%5c", this->init.charVal);
      break;
    case (t_DOUBLE):
      printf("%5.3lf", this->init.doubleVal);
      break;
    default:
      printf("Invalid Type");
    }
  }
  else printf(" NULL");
  printf("%5d", this->size);
  printf("%5d", this->offset);
  printf("%10s", this->scope.c_str());
  if(this->nestedTable != NULL)
    printf("%20s\t", this->nestedTable->name.c_str());
  else
    printf("%15s\t", "NULL");
  this->t->print();
  puts("");
}

// Symbol Table Definations

symTable::symTable() {
  offset = 0;
}

symTable::symTable(string s) {
  name = s;
  offset = 0;
}

void symTable::print() {
  printf("%s:\n", name.c_str());
  for(int i = 0; i < entries.size(); i++) {
    entries[i]->print();
  }
  puts("");
}

bool symTable::isPresent(string name) {
  for(int i = 0; i < entries.size(); i++) {
    if(entries[i]->name.length() != 0 && name == entries[i]->name) {
      return true;
    }
  }
  return false;
}

symEntry* symTable::lookUp(string name) {
  for(int i = 0; i < entries.size(); i++) {
    if(entries[i]->name.length() != 0 && name == entries[i]->name) {
      return entries[i];
    }
  }
  symEntry *sym = new symEntry();
  sym->name = name;
  entries.push_back(sym);
  return sym;
}

symEntry* symTable::genTemp(type *t) {
  symEntry *sym = new symEntry("temp");
  char tmp[10];

  sprintf(tmp, "t%03d", tempCount);
  tempCount++;
  sym->name = tmp;
  sym->t = t;
  int size = 0;
  switch(t->pType) {
  case (t_INT):
    size = SIZE_OF_INT;
    break;
  case (t_CHAR):
    size = SIZE_OF_CHAR;
    break;
  case (t_DOUBLE):
    size = SIZE_OF_DOUBLE;
    break;
  case (t_PTR):
    size = SIZE_OF_PTR;
    break;
  default:
    size = 0;
  }
  sym->size = size;
  sym->offset = offset;
  offset += size;
  entries.push_back(sym);
  return sym;
}

void symTable::update(symEntry *s, type *t, int sz) {
  s->t = t;
  s->size = sz;
  s->offset = offset;
  offset += s->size;
  if(t->pType == t_FUNC)
    s->scope = "global";
}

void symTable::update(symEntry *s, initialVal init) {
  s->init = init;
  s->wasInitialised = true;
}

// Function Definations for QuadEntry
quadEntry::quadEntry(opcodeType o, string s1, string s2, string s3){
  op = o;
  result = s1;
  arg1 = s2;
  arg2 = s3;
}

quadEntry::quadEntry(opcodeType o, string s1, int n){
  op = o;
  result = s1;
  arg2 = "";
  char tmp[10];
  sprintf(tmp, "%d", n);
  arg1 = tmp;
}

quadEntry::quadEntry(opcodeType o, string s1, char c){
  op = o;
  result = s1;
  arg2 = "";
  char tmp[10];
  sprintf(tmp, "%d", (int)c);
  arg1 = tmp;
}

quadEntry::quadEntry(opcodeType o, string s1, double d){
  op = o;
  result = s1;
  arg2 = "";
  char tmp[10];
  sprintf(tmp, "%lf", d);
  arg1 = tmp;
}

void quadEntry::setTarget(int addr) {
  char tmp[10];
  sprintf(tmp, "%d", addr);
  string tmps(tmp);
  this->result = tmps;
}

void quadEntry::print(FILE *out) {
  switch(op) {
  case(OP_PLUS):
    fprintf(out, "%s = %s + %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_MINUS):
    fprintf(out, "%s = %s - %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_MULT):
    fprintf(out, "%s = %s * %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_DIV):
    fprintf(out, "%s = %s / %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_MOD):
    fprintf(out, "%s = %s %% %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_UMINUS):
    fprintf(out, "%s = -%s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_COPY):
    fprintf(out, "%s = %s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_T):
    fprintf(out, "if (%s) goto %s\n", arg1.c_str(), result.c_str());
    break;
  case(OP_F):
    fprintf(out, "ifFalse (%s) goto %s\n", arg1.c_str(), result.c_str());
    break;
  case(OP_LT):
    fprintf(out, "if (%s < %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_LTE):
    fprintf(out, "if (%s <= %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_GT):
    fprintf(out, "if (%s > %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_GTE):
    fprintf(out, "if (%s >= %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_EQ):
    fprintf(out, "if (%s == %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_NEQ):
    fprintf(out, "if (%s != %s) goto %s\n", arg1.c_str(), arg2.c_str(), result.c_str());
    break;
  case(OP_INT2DBL):
    fprintf(out, "%s = int2dbl(%s)\n", result.c_str(), arg1.c_str());
    break;
  case(OP_DBL2INT):
    fprintf(out, "%s = dbl2int(%s)\n", result.c_str(), arg1.c_str());
    break;
  case(OP_INT2CHAR):
    fprintf(out, "%s = int2char(%s)\n", result.c_str(), arg1.c_str());
    break;
  case(OP_CHAR2INT):
    fprintf(out, "%s = char2int(%s)\n", result.c_str(), arg1.c_str());
    break;
  case(OP_L_VAL_AT):
    fprintf(out, "* %s = %s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_R_VAL_AT):
    fprintf(out, "%s = * %s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_L_INDEX):
    fprintf(out, "%s[%s] = %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_R_INDEX):
    fprintf(out, "%s = %s[%s]\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_ADDR):
    fprintf(out, "%s = & %s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_PARAM):
    fprintf(out, "param %s\n", result.c_str());
    break;
  case(OP_GOTO_O):
    fprintf(out, "goto %s\n", result.c_str());
    break;
  case(OP_CALL):
    fprintf(out, "%s = call %s, %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_RETURN):
    fprintf(out, "return\n");
    break;
  case(OP_RETURN_VAL):
    fprintf(out, "return %s\n", result.c_str());
    break;
  case(OP_BW_NOT):
    fprintf(out, "%s = ~ %s\n", result.c_str(), arg1.c_str());
    break;
  case(OP_SHL):
    fprintf(out, "%s = %s << %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_SHR):
    fprintf(out, "%s = %s >> %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_BW_AND):
    fprintf(out, "%s = %s & %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_BW_XOR):
    fprintf(out, "%s = %s ^ %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_BW_OR):
    fprintf(out, "%s = %s | %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
    break;
  case(OP_FUNC_START):
    fprintf(out, "%s Starts\n", result.c_str());
    break;
  case(OP_FUNC_END):
    fprintf(out, "%s Ends\n", result.c_str());
    break;
  default:
    fprintf(out, "Error ! Unknown opcodeType.\n");
    exit(-1);
  }
}

// Function Definations of QuadList
void quadList::emit(quadEntry q) {
  this->quads.push_back(q);
  this->nextInstr++;
}

void quadList::print(){
  for(int i = 0; i < quads.size(); i++)
    quads[i].print(stdout);
}

// Functions of Node
node::node(){
  next = NULL;
}

node::node(int i){
  quadIndex = i;
  next = NULL;
}

// Functions of nodeList
nodeList::nodeList(int i) {
  first = new node(i);
  last = head;
}

nodeList::nodeList(){
  first = last = NULL;
}

void nodeList::clear(){
  node *ptr = first;
  node *temp;
  while(ptr != NULL) {
    temp = ptr;
    ptr = ptr->next;
    delete temp;
  }
  first = NULL;
  next = NULL;
}

void nodeList::print() {
  node * ptr = first;
  while(ptr != NULL) {
    printf("%d ", ptr->quadIndex);
    ptr = ptr->next;
  }
  printf("\n");
}

// Merging List: for backpatching and all
nodeList* mergeList(nodeList *l1, nodeList *l2){
  if(l1 == NULL || l1->first == NULL)
    return l2;
  if(l2 == NULL || l2->head == NULL)
    return l1;
  l1->tail->next = l2->head;
  l1->tail = l2->tail;
  return l1;
}

// Backpatch
void backPatch(nodeList* &p, int addr) {
  if(p != NULL && p->first != NULL) {
    node *ptr = p->first;
    while(ptr != NULL) {
      quad.quads[ptr->quadIndex].setTarget(addr); 
      ptr = ptr->next;
    }
    p->clear();
    p = NULL;
  }
}

bool typeCheck(type_expression *e1, type_expression *e2, bool isAssignment) {
  if(!areEqual(e1->t, e2->t)) {
    type_expression *e3 = new type_expression();
    if(!isAssignment && e1->t->pType < e2->t->pType) {
      if(e1->t->pType == t_BOOL && e2->t->pType == t_INT) {
	convBool2Int(e1);
	return true;
      } 
      e3->loc = currentSymTab->genTemp(new type(*(e2->t)));
      if(e1->t->pType == t_INT && e2->t->pType == t_DOUBLE) {
	quad.emit(quadEntry(OP_INT2DBL, e3->loc->name, e1->loc->name));
      } else if(e1->t->pType == t_INT && e2->t->pType == t_CHAR) {
	quad.emit(quadEntry(OP_INT2CHAR, e3->loc->name, e1->loc->name));
      } else if(e1->t->pType == t_CHAR && e2->t->pType == t_INT) {
	quad.emit(quadEntry(OP_CHAR2INT, e3->loc->name, e1->loc->name));
      } else if(e1->t->pType == t_DOUBLE && e2->t->pType == t_INT) {
	quad.emit(quadEntry(OP_DBL2INT, e3->loc->name, e1->loc->name));
      } else
	return false;
      e1->loc = e3->loc;
    } else {
      if(e2->t->pType == t_BOOL && e1->t->pType == t_INT) {
	convBool2Int(e2);
	return true;
      } 
      e3->loc = currentSymTab->genTemp(new type(*(e1->t)));
      if(e1->t->pType == t_INT && e2->t->pType == t_DOUBLE) {
	quad.emit(quadEntry(OP_DBL2INT, e3->loc->name, e2->loc->name));
      } else if(e1->t->pType == t_INT && e2->t->pType == t_CHAR) {
	quad.emit(quadEntry(OP_CHAR2INT, e3->loc->name, e2->loc->name));
      } else if(e1->t->pType == t_CHAR && e2->t->pType == t_INT) {
	quad.emit(quadEntry(OP_INT2CHAR, e3->loc->name, e2->loc->name));
      } else if(e1->t->pType == t_DOUBLE && e2->t->pType == t_INT){
	quad.emit(quadEntry(OP_INT2DBL, e3->loc->name, e2->loc->name));
      } else
	return false;
      e2->loc = e3->loc; 
    }
  }
  return true;
}

void convExpression2Bool(type_expression *e) {
  if(e->t->pType != t_BOOL) {
    e->falseList = new List(quad.nextInstr);
    quad.emit(quadEntry(OP_EQ, "", e->loc->name, "0"));
    e->trueList = new List(quad.nextInstr);
    quad.emit(quadEntry(OP_GOTO_O, ""));
  }
}

void convBool2Int(type_expression *b) {
  if(b->t->pType == t_BOOL) {
    type_expression *e = new type_expression();
    e->loc = currentSymTab->genTemp(new type(t_INT));
    e->t = e->loc->t;
    backPatch(b->trueList, quad.nextInstr);
    quad.emit(quadEntry(OP_COPY, e->loc->name, "1"));
    backPatch(b->falseList, quad.nextInstr);
    quad.emit(quadEntry(OP_COPY, e->loc->name, "0"));
    b->loc = e->loc;
    b->t = e->t;
  }
}

bool paramTypeCheck(type_expression *e1, type_expression *e2) {
  if((e1->t->pType == t_ARR || e1->t->pType == t_PTR)
     && (e2->t->pType == t_ARR || e2->t->pType == t_PTR)) {
    return true;
  }
  return typeCheck(e1, e2, true);
}

bool checkParams(type_expression e, vector <type_expression*> *args) {
  int n = 0;
  vector <symEntry*> &v = e.loc->nestedTable->entries;
  for(int i = 1; i < v.size(); i++) {
    if(v[i]->scope != "param") continue;
    if(n >= args->size())
      return false;
    type_expression e1;
    e1.t = v[i]->t;
    type_expression *e2 = (*args)[n];
    n++;
    if(!paramTypeCheck(&e1, e2))
      return false;
  }
  return n == args->size();
}

void adjustOffset(symTable * sym) {
  int paramOffset = +8;
  int localOffset = 0;
  for(int i = 0; i < sym->entries.size(); i++) {
    if(sym->entries[i]->scope == "param") {
      sym->entries[i]->offset = paramOffset;
      if(sym->entries[i]->t->pType == t_CHAR) sym->entries[i]->size = SIZE_OF_INT;
      paramOffset += sym->entries[i]->size;
    } else if(sym->entries[i]->scope == "local" || sym->entries[i]->scope == "temp") {
      localOffset -= sym->entries[i]->size;
      sym->entries[i]->offset = localOffset;
    }
  }
  sym->sizeLocal = ((abs(localOffset) + 15) / 16) * 16;
  sym->sizeParam = abs(paramOffset) - 8;
}

int main() {
  yyparse();
  for(int i = 0; i < (int)globalSymTab->entries.size(); ++i) {
    adjustOffset(globalSymTab->entries[i]->nestedTable);
  }
  return 0;
}
