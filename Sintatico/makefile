run:
	bison --defines=./src/sintaxe.tab.h --output=./src/sintaxe.tab.c -v ./src/sintaxe.y
	flex ./src/lexico.l
	gcc ./src/sintaxe.tab.c ./src/lex.yy.c ./src/arvore.c ./src/lista.c -Wall -o tradutor -lfl