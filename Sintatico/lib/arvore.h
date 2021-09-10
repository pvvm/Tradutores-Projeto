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
    struct listaNo* lista;
}no;

typedef struct listaNo {
    struct No* no;
    struct listaNo* prox;
}listNo;

struct No* novoNo(char *);

void desalocar(struct No*);

int printaArvore(struct No*, int);

struct No* montaNo(char*, struct No*, struct No*, struct No*, struct listaNo*);

struct listaNo* novaListaNo(struct listaNo**, struct No*);

#endif