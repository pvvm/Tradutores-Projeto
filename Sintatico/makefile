run:
	bison --defines=./src/sintaxe.tab.h --output=./src/sintaxe.tab.c ./src/sintaxe.y
	flex ./src/lexico.l
	gcc ./src/sintaxe.tab.c ./src/lex.yy.c -Wall -o tradutor -lm