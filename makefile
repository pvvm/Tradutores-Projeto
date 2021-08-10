NAME = *

all: tests/$(NAME)

lexico:
	lex ./src/lexico.l

a.out: lexico
	gcc lex.yy.c

tests/$(NAME): a.out
	./a.out tests/$(NAME)