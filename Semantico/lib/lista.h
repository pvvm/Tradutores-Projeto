#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tabelaSimb {
    char simbolo[500];           // Simbolo que representa
    char varOuFunc[15];         // Se eh var, func ou const
    char tipo[15];              // Tipo
    char valor[50];             // Valor armazenado (se tiver)
    int numArgs;
    int escopo;                 // Escopo ao qual pertence
    int linha;                  // Linha onde foi declarado
    int coluna;                 // Coluna onde foi declarado
    struct listaArgs *tipoArgs;

    struct tabelaSimb *prox;
} tab;

typedef struct listaEscopo {
    int escopo;
    struct listaEscopo *prox;
} esc;

typedef struct listaArgs {
    char tipo[15];
    struct listaArgs *prox;
} lArgs;


// Operacoes da tabela de simbolos

int procuraLista(struct tabelaSimb**, char *, int);

int push(struct tabelaSimb**, char *, char *, char *, char *, int, int, int);

void printaArgs(struct listaArgs *);

void printaLista(struct tabelaSimb *);

void insereArg(struct tabelaSimb **, char *, int, int, struct listaArgs **);

int liberaArgs(struct listaArgs *);

int liberaLista(struct tabelaSimb *);

struct listaArgs* pushArgs(struct listaArgs**, char *);

struct tabelaSimb* retSimb(struct tabelaSimb **, char *, struct listaEscopo **);

// Operacoes da lista para o escopo
void pushEsc(struct listaEscopo**, int);

int popEsc(struct listaEscopo**);

int liberaEsc(struct listaEscopo *);

void printaEsc(struct listaEscopo *);

int retUlt(struct listaEscopo**);

int buscaEscopo(struct listaEscopo**, int);

#endif