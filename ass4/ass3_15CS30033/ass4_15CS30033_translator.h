#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <assert.h>
#include <map>

using namespace std;

#define SIZE_OF_INT     4
#define SIZE_OF_DOUBLE  8
#define SIZE_OF_CHAR    1
#define SIZE_OF_VOID    0
#define SIZE_OF_PTR     4
#define SIZE_OF_BOOL    1
#define SIZE_OF_FUNC    0

typedef enum {
  t_BOOL = 0,
  t_CHAR,
  t_INT,
  t_DOUBLE,
  t_ARR,
  t_FUNC,
  t_VOID,
  t_PTR,
  t_MATRIX
} primaryType;

// structure for storing all possible types
struct type{
  primaryType pType;
  int size;
  type *next;
    
  void print();

  type();
  type(primaryType p);
  type(const type &t);

  int getSize();
};

struct symTable;

// union for storing the initial value of symbol entries
union initialVal {
  int intVal;
  double doubleVal;
  char charVal;
  // We might need matrixVal here.
};

// Each entry in the symbol table
struct symEntry {
  string name;            
  type *t;
  int size;
  initialVal init;
  // scope: local, temp, global
  string scope;
  bool wasInitialised;
  // offset w.r.t its symbol table
  int offset;
  // in case of functions
  symTable *nestedTable;
  symEntry(string s = "local");
  void print();
};


// count of temporary variables generated
extern int tempCount;

// structure for Symbol Table
struct symTable {
  string name;
  int offset;
  int sizeLocal;
  int sizeParam;
  vector <symEntry *> entries;

  symTable();
  symTable(string s);
  void print();
  bool isPresent(string s);
  symEntry* lookUp(string name);
  symEntry* genTemp(type_t * type);
  void update(symEntry * s, type_t * t, int sz);
  void update(symEntry * s, initialVal init);
};

extern symTable *globalSymTab;
extern symTable *currentSymTab;
extern map <string, int> uniqueLabels;
extern vector <string> strLabels;

// enum for supported opcode types
typedef enum {
  OP_PLUS = 1,
  OP_MINUS,
  OP_MULT,
  OP_DIV,
  OP_MOD,
  OP_UMINUS,
  OP_COPY,
  OP_LT,
  OP_LTE,
  OP_GT,
  OP_GTE,
  OP_EQ,
  OP_NEQ,
  OP_T,
  OP_F,
  OP_INT2DBL,
  OP_DBL2INT,
  OP_INT2CHAR,
  OP_CHAR2INT,
  OP_L_VAL_AT,
  OP_R_VAL_AT,
  OP_L_INDEX,
  OP_R_INDEX,
  OP_ADDR,
  OP_PARAM,
  OP_GOTO_O,
  OP_CALL,
  OP_RETURN_VAL,
  OP_RETURN,
  OP_SHL,
  OP_SHR,
  OP_BW_NOT,
  OP_BW_AND,
  OP_BW_XOR,
  OP_BW_OR,
  OP_FUNC_START,
  OP_FUNC_END
} opcodeType;

// Entry of a quad
struct quadEntry {
  opcodeType op;
  string result, arg1, arg2;
  int labelIdx;

  quadEntry(opcodeType o, string s1 = "", string s2 = "", string s3 = "");
  quadEntry(opcodeType o, string s1, char c);
  quadEntry(opcodeType o, string s1, int n);
  quadEntry(opcodeType o, string s1, double d);
  void setTarget(int addr);
  void print(FILE *out);
  void genTargetCode(FILE * fp);
};

// QuadList
struct quadList {
  int nextInstr;
  int width;
  type *t;
  vector <quadEntry> quads;
  void emit(quadEntry q);
  void print();
};

extern quadList quad;

// Node
struct node {
  int quadIndex;
  node *next;
  node(int idx);
  node();

};

// List of nodes
struct nodeList {
  int quadIndex;
  node *first, *last;

  nodeList();
  nodeList(int i);
  void clear();
  void print(); //Remove this once completed and its corresponding defination
};

// Expression non-Terminals
struct type_expression {
  nodeList *trueList, *falseList;
  symEntry *loc, *base;
  type *t;
  bool isArray, isPtr, isString;
  int strLabel;
};

// Declaration non-terminals
struct type_declaration {
  type *t;
  int width;
};

// Identifier non-terminals
struct type_identifier {
  string *strVal;
  symEntry *loc;
};

bool areEqual(type *t1, type *t2);
nodeList* mergeList(nodeList * l1, nodeList * l2);
void convExpression2Bool(type_expression *e);
void convBool2Int(type_expression *e);
void backPatch(nodeList* &p, int addr);
bool typeCheck(type_expression *e1, type_expression *e2, bool isAssignment = false);
bool checkParams(type_expression e, vector <type_expression*> *v);

#endif
