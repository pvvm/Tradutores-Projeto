NAME = *

all: a.out

lex.yy.c: lexico.l
	lex lexico.l

a.out: lex.yy.c $(NAME)
	gcc lex.yy.c

$(NAME): lex.yy.c
	./a.out $(NAME)