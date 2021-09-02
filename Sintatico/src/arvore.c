#include "../lib/arvore.h"

/*
    Funcao que aloca o novo no
    Argumentos: o nome do no
*/
struct No* novoNo(char *nome) {
    struct No* no = (struct No*) malloc (sizeof(struct No));

    strcpy(no->nome, nome);

    no->no1 = NULL;
    no->no2 = NULL;
    no->no3 = NULL;

    return no;
}

/*
    Funcao que desaloca a arvore
    Argumentos: o no utilizado no momento
*/
void desalocar(struct No* no) {

    if(no == NULL)
        return;

    desalocar(no->no1);
    desalocar(no->no2);
    desalocar(no->no3);
    free(no);
}


/*
    Funcao que imprime a arvore (pre-ordem)
    Argumentos: o no utilizado no momento e a profundidade do no
*/
int printaArvore(struct No* no, int profund) {
    if(no == NULL)
        return --profund;
        
    for(int i = 0; i < profund; i++)
        printf("    ");
    printf("| %s\n", no->nome);

    profund = printaArvore(no->no1, ++profund);
    profund = printaArvore(no->no2, ++profund);
    profund = printaArvore(no->no3, ++profund);

    return --profund;
}