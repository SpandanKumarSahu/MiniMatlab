all: lexer parser

lexer : ass3_15CS30033_lexer.c lex.yy.c
	gcc ass3_15CS30033_lexer.c -o lexer

parser : ass3_15CS30033_parser.c lex.yy.c
	gcc ass3_15CS30033_parser.c -o parser

lex.yy.c : ass3_15CS30033.l ass3_15CS30033.y y.tab.c
	flex ./ass3_15CS30033.l

y.tab.c : ass3_15CS30033.y
	bison ./ass3_15CS30033.y -o y.tab.c

clean:
	rm lexer parser y.tab.c lex.yy.c
