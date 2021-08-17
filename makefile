all: a.out

lexico:
	lex ./src/lexico.l

a.out: lexico
	gcc ./src/lex.yy.c -Wall -o tradutor