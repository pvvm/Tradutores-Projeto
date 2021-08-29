#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct No {
    char nome[50];
    struct No* no1;
    struct No* no2;
    struct No* no3;
    struct No* no4;
}no;

struct No* novoNo(char *);

void desalocar(struct No*);

int printaArvore(struct No*, int);

#endif