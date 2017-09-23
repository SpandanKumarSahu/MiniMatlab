all: lexer.out parser.out
lexer.out : ass3_15CS30034_lexer.c lex.yy.c
	gcc ass3_15CS30034_lexer.c -o lexer.out

parser.out : ass3_15CS30034_parser.c lex.yy.c
	gcc ass3_15CS30034_parser.c -o parser.out

lex.yy.c : ass3_15CS30034.l ass3_15CS30034.y ass3_15CS30034.tab.c
	flex ./ass3_15CS30034.l

ass3_15CS30034.tab.c : ass3_15CS30034.y
	bison ./ass3_15CS30034.y
