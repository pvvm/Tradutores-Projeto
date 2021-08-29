#include "../lib/arvore.h"

struct No* novoNo(char *nome) {
    struct No* no = (struct No*) malloc (sizeof(struct No));

    strcpy(no->nome, nome);

    no->no1 = NULL;
    no->no2 = NULL;
    no->no3 = NULL;
    no->no4 = NULL;

    return no;
}

void desalocar(struct No* no) {

    if(no == NULL)
        return;

    desalocar(no->no1);
    desalocar(no->no2);
    desalocar(no->no3);
    desalocar(no->no4);
    free(no);
}

int printaArvore(struct No* no, int profund) {
    if(no == NULL)
        return --profund;
    for(int i = 0; i < profund; i++)
        printf("  ");
    printf("| %s\n", no->nome);

    profund = printaArvore(no->no1, ++profund);
    profund = printaArvore(no->no2, ++profund);
    profund = printaArvore(no->no3, ++profund);
    profund = printaArvore(no->no4, ++profund);

    return --profund;
}