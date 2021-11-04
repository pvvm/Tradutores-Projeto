#include "../lib/ger_cod.h"

/*
    Metodo que escreve a instrucao de inicializacao default das variaveis locais
    Argumentos: o contador do numero da variaveis temporarias, o ponteiro para o arquivo de escrita e o tipo da variavel
*/
void inicioDefault(int ger_codigo_var, FILE* escrita, char *tipo) {
    char aux_str[200];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "mov ");
    strcat(aux_str, temp);
    if(!strcmp(tipo, "int"))
        strcat(aux_str, ", 0\n");
    else if(!strcmp(tipo, "float"))
        strcat(aux_str, ", 0.0\n");
    else
        strcat(aux_str, ", 0\n");
    
    fputs(aux_str, escrita);
}

/*
    Metodo que escreve as instrucoes para cada operacao
    Argumentos: o operador, os operandos, o ponteiro para o contador de variaveis temporarias, o arquivo de escrita, o no atual, uma flag e a string da instrucao de incremento do for,
    flag para acoes para operacoes especificas, e ponteiros para o contador de label, o contador de string e o flag paras instrucoes de == e !=
*/
void geraOperacoes(char *operador, char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento, int op_especial, int *label_cont, int *string_cont, int *flag_brz) {
    char aux_str[500];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "");
    int opcao_var = 0;
    int so_um_operando = 0;
    int op_lista = 0;
    int var_global = 0;

    // Operacoes unarias
    if(operando2 == NULL) {
        if(op_especial == 0) {
            // Operacao -
            if(!strcmp(operador, "-")) {
                strcpy(aux_str, "minus ");
                strcat(aux_str, temp);
            // Operacao !
            } else if(!strcmp(operador, "!")) {
                // Em inteiros e float
                if(!strcmp(no->tipo, "int") || !strcmp(no->tipo, "float")) {
                    strcpy(aux_str, "not ");
                    strcat(aux_str, temp);
                // Em lista
                } else if(!strcmp(no->tipo, "int list") || !strcmp(no->tipo, "float list")) {
                    strcpy(aux_str, "mov ");
                    strcat(aux_str, temp);
                    op_lista = 2;
                }
            // Operacao ?
            } else if(!strcmp(operador, "?")){
                strcpy(aux_str, "mov ");
                strcat(aux_str, temp);
                op_lista = 1;
            // Operacao %
            } else if(!strcmp(operador, "%")){
                strcpy(aux_str, "mov ");
                strcat(aux_str, temp);
                op_lista = 2;
            // Operacao =
            } else if(!strcmp(operador, "=")) {
                strcpy(aux_str, "mov ");
                // Caso nao seja variavel global
                if(no->no1->simbolo->escopo != 0) {
                    strcat(aux_str, no->no1->simbolo->var_temp);
                    opcao_var = 1;
                } else {
                    strcat(aux_str, temp);
                    var_global = 1;
                }
            // Operacao write
            } else if(!strcmp(operador, "write")) {
                strcpy(aux_str, "print ");
                so_um_operando = 1;
            // Operacao writeln
            } else if(!strcmp(operador, "writeln")) {
                strcpy(aux_str, "println ");
                so_um_operando = 1;
            // Operacao read
            } else if(!strcmp(operador, "read")) {
                if(!strcmp(no->no1->simbolo->tipo, "int"))
                    strcpy(aux_str, "scani ");
                else if(!strcmp(no->no1->simbolo->tipo, "float"))
                    strcpy(aux_str, "scanf ");
                so_um_operando = 1;
            // Operacao return
            } else if(!strcmp(operador, "return")) {
                strcpy(aux_str, "return ");
                so_um_operando = 1;
            // Operacao de definicao de parametros
            } else if(!strcmp(operador, "parameter")) {
                strcpy(aux_str, "param ");
                so_um_operando = 1;
            }

            // Caso a string resultante so tenha mais de um operando
            if(so_um_operando == 0)
                strcat(aux_str, ", ");
            
            // Se nao eh variavel global
            if(var_global == 0)
                strcat(aux_str, operando1);
            // Se eh variavel global faz o mov com o & e depois outro com o operando para o temp
            else if(var_global == 1) {
                strcat(aux_str, "&");
                strcat(aux_str, no->no1->simbolo->simbolo);
                strcat(aux_str, "\nmov ");
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcpy(no->no1->simbolo->var_temp, temp);
            }
        
            // Decide qual indice utiliza
            if(op_lista == 1)
                strcat(aux_str, "[0]");
            else if(op_lista == 2)
                strcat(aux_str, "[1]");

            // Continuacao da operacao %
            // Copia o endereco para uma variavel temporaria e libera a memoria do antigo primeiro elemento
            if(!strcmp(operador, "%")) {
                (*ger_codigo_var)++;
                sprintf(aux_num, "%d", *ger_codigo_var);
                strcpy(temp, "$");
                strcat(temp, aux_num);
                strcat(aux_str, "\nmov ");
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcat(aux_str, "\nmov ");
                strcat(aux_str, operando1);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcat(aux_str, "[1]\nmemf ");
                strcat(aux_str, temp);
                opcao_var = 1;
            }

        // Operacao de write e writeln
        } else {
            char aux[300];
            char aux_num1[15];
            char aux_num2[15];
            char aux_num3[15];
            char label[10];

            strcpy(aux, "mov $");                       // mov $, tamanho_string
            sprintf(aux_num3, "%d", *ger_codigo_var);
            strcat(aux, aux_num3);
            (*ger_codigo_var)++;
            strcat(aux, ", ");
            sprintf(aux_num1, "%d", ((int)strlen(operando1) - 2));
            strcat(aux, aux_num1);

            strcat(aux, "\nmov $");                        // mov $, 0
            sprintf(aux_num1, "%d", *ger_codigo_var);
            (*ger_codigo_var)++;
            strcat(aux, aux_num1);
            strcat(aux, ", 0\nL");

            sprintf(label, "%d", *label_cont);  // L :
            strcat(aux, label);

            strcat(aux, ":\nmov $");                       // mov $, &
            sprintf(aux_num2, "%d", *ger_codigo_var);
            strcat(aux, aux_num2);
            strcat(aux, ", &s");
            sprintf(aux_num2, "%d", *string_cont);
            (*string_cont)++;
            strcat(aux, aux_num2);

            strcat(aux, "\nmov $");
            sprintf(aux_num2, "%d", *ger_codigo_var);
            strcat(aux, aux_num2);
            strcat(aux, ", $");
            strcat(aux, aux_num2);
            strcat(aux, "[$");
            strcat(aux, aux_num1);
            (*ger_codigo_var)++;

            strcat(aux, "]\nprint $");
            strcat(aux, aux_num2);
            strcat(aux, "\nadd $");
            strcat(aux, aux_num1);
            strcat(aux, ", $");
            strcat(aux, aux_num1);

            strcat(aux, ", 1\nsub $");
            sprintf(aux_num2, "%d", *ger_codigo_var);
            strcat(aux, aux_num2);
            strcat(aux, ", $");
            strcat(aux, aux_num3);
            strcat(aux, ", $");
            strcat(aux, aux_num1);
            
            strcat(aux, "\nbrnz L");
            strcat(aux, label);
            strcat(aux, ", $");
            strcat(aux, aux_num2);

            if(!strcmp(operador, "writeln"))
                strcat(aux, "\nprint \'\\n\'");

            (*label_cont)++;
            (*ger_codigo_var)++;

            fputs(aux, escrita);
        }

    // Operacoes binarias
    } else {
        int invertido = 0;
        // Operacao *
        if(!strcmp(operador, "*")) {
            strcpy(aux_str, "mul ");
        // Operacao /
        } else if(!strcmp(operador, "/")) {
            strcpy(aux_str, "div ");
        // Operacao -
        } else if(!strcmp(operador, "-")) {
            strcpy(aux_str, "sub ");
        // Operacao +
        } else if(!strcmp(operador, "+")) {
            strcpy(aux_str, "add ");
        // Operacao <
        } else if(!strcmp(operador, "<")) {
            strcpy(aux_str, "slt ");
        // Operacao >
        } else if(!strcmp(operador, ">")) {
            strcpy(aux_str, "slt ");
            invertido = 1;
        // Operacao <=
        } else if(!strcmp(operador, "<=")) {
            strcpy(aux_str, "sleq ");
        // Operacao >=
        } else if(!strcmp(operador, ">=")) {
            strcpy(aux_str, "sleq ");
            invertido = 1;
        // Operacao ==
        } else if(!strcmp(operador, "==")) {
            // Se for uma lista com NIL, ao inves de seq se utiliza o brnz, visto que comparar 0 com ponteiro gera warning
            if((!strcmp(no->no1->simbolo->tipo, "int list") && !strcmp(no->no2->nome, "NIL")) || (!strcmp(no->no1->simbolo->tipo, "float list") && !strcmp(no->no2->nome, "NIL"))) {
                strcpy(aux_str, "brnz L");
                char label[10];
                sprintf(label, "%d", *label_cont);
                strcat(aux_str, label);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                invertido = -1;
                *flag_brz = 1;
            } else if((!strcmp(no->no1->nome, "NIL") && !strcmp(no->no2->simbolo->tipo, "int list")) || (!strcmp(no->no1->nome, "NIL") && !strcmp(no->no2->simbolo->tipo, "float list"))) {
                strcpy(aux_str, "brnz L");
                char label[10];
                sprintf(label, "%d", *label_cont);
                strcat(aux_str, label);
                strcat(aux_str, ", ");
                strcat(aux_str, operando2);
                invertido = -1;
                *flag_brz = 1;
            } else
                strcpy(aux_str, "seq ");
        // Operacao !=
        } else if(!strcmp(operador, "!=")) {
            // Se for uma lista com NIL, ao inves de seq se utiliza o brz, visto que comparar 0 com ponteiro gera warning
            if((!strcmp(no->no1->simbolo->tipo, "int list") && !strcmp(no->no2->nome, "NIL")) || (!strcmp(no->no1->simbolo->tipo, "float list") && !strcmp(no->no2->nome, "NIL"))) {
                strcpy(aux_str, "brz L");
                char label[10];
                sprintf(label, "%d", *label_cont);
                strcat(aux_str, label);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                invertido = -1;
                *flag_brz = 1;
            } else if((!strcmp(no->no1->nome, "NIL") && !strcmp(no->no2->simbolo->tipo, "int list")) || (!strcmp(no->no1->nome, "NIL") && !strcmp(no->no2->simbolo->tipo, "float list"))) {
                strcpy(aux_str, "brz L");
                char label[10];
                sprintf(label, "%d", *label_cont);
                strcat(aux_str, label);
                strcat(aux_str, ", ");
                strcat(aux_str, operando2);
                invertido = -1;
                *flag_brz = 1;
            } else {
                char copia_temp[11];
                strcpy(copia_temp, temp);
                strcpy(aux_str, "seq ");
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcat(aux_str, ", ");
                strcat(aux_str, operando2);
                (*ger_codigo_var)++;
                sprintf(aux_num, "%d", *ger_codigo_var);
                strcpy(temp, "$");
                strcat(temp, aux_num);
                strcat(aux_str, "\nnot ");
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, copia_temp);
                invertido = -1;
            }
        // Operacao &&
        } else if(!strcmp(operador, "&&")) {
            strcpy(aux_str, "and ");
        // Operacao ||
        } else if(!strcmp(operador, "||")) {
            strcpy(aux_str, "or ");
        // Operacao :
        } else if(!strcmp(operador, ":")) {
            // Aloca memoria, copia o valor para o indice 0 e o endereço do primeiro para 1
            sprintf(aux_num, "%d", *ger_codigo_var);
            strcpy(aux_str, "mema $");
            strcat(aux_str, aux_num);
            strcat(aux_str, ", 2\nmov $");
            strcat(aux_str, aux_num);
            strcat(aux_str, "[0], ");
            strcat(aux_str, operando1);
            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num);
            strcat(aux_str, "[1], ");
            strcat(aux_str, operando2);
            invertido = -1;
        // Operacao >>
        } else if(!strcmp(operador, ">>")) {
            char label[10];
            char aux_num0[10];                      // Enderecos da lista operada
            char aux_num1[10];                      // Espacos alocados
            char aux_num2[10];                      // Elementos da lista operada
            char aux_num3[10];
            char aux_num4[10];
            char aux_num5[10];

            (*ger_codigo_var)++;
            sprintf(aux_num0, "%d", *ger_codigo_var);
            strcpy(aux_str, "mov $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);             // Armazena em aux_num0 o endereco da lista operada

            (*ger_codigo_var)++;
            sprintf(aux_num1, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmema $");           // Aloca memoria e coloca em aux_num1
            strcat(aux_str, aux_num1);
            strcat(aux_str, ", 2\n");

            strcat(aux_str, "mov ");
            strcat(aux_str, temp);                  // Inicializa temp
            strcat(aux_str, ", $");                 // Temp contem o endereco da lista resultante
            strcat(aux_str, aux_num1);
            strcat(aux_str, "\nL");

            sprintf(label, "%d", *label_cont);
            strcat(aux_str, label);                 // Escreve label

            (*ger_codigo_var)++;
            sprintf(aux_num2, "%d", *ger_codigo_var);
            strcat(aux_str, ":\nmov $");
            strcat(aux_str, aux_num2);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, "[0]\n");               // Copia o valor do elemento atual de aux_num0 para aux_num2

            if(op_especial == 1) {                  // Caso tenha cast de float para int
                strcat(aux_str, "fltoint $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, ", $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, "\n");
            } else if(op_especial == 2) {           // Caso tenha cast de int para float
                strcat(aux_str, "inttofl $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, ", $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, "\n");
            }

            strcat(aux_str, "param $");           // Define o parametro
            strcat(aux_str, aux_num2);

            strcat(aux_str, "\ncall ");             // Chamada
            strcat(aux_str, operando1);
            strcat(aux_str, ", 1");

            (*ger_codigo_var)++;
            sprintf(aux_num3, "%d", *ger_codigo_var);
            strcat(aux_str, "\npop $");             // Pega o retorno e armazena em aux_num1[0]
            strcat(aux_str, aux_num3);

            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[0], $");
            strcat(aux_str, aux_num3);

            (*ger_codigo_var)++;
            sprintf(aux_num4, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmema $");              // Aloca memoria e coloca o ponteiro em aux_num1[1]
            strcat(aux_str, aux_num4);
            strcat(aux_str, ", 2");

            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[1], $");
            strcat(aux_str, aux_num4);

            (*ger_codigo_var)++;
            sprintf(aux_num5, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num5);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num1);

            strcat(aux_str, "\nmov $");               // Copia para aux_num1 o proximo endereco de aux_num1
            strcat(aux_str, aux_num1);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[1]\n");

            strcat(aux_str, "mov $");               // Copia para aux_num0 o proximo endereco de aux_num0
            strcat(aux_str, aux_num0);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, "[1]\n");

            strcat(aux_str, "brnz L");               // Se nao for o ultimo endereco (0), volta pro comeco
            strcat(aux_str, label);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);

            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num5);
            strcat(aux_str, "[1], 0\n");                 // Copia 0 para o ultimo endereco da lista

            strcat(aux_str, "memf $");
            strcat(aux_str, aux_num1);

            (*label_cont)++;
            invertido = -1;
        // Operacao <<
        } else if(!strcmp(operador, "<<")) {
            char label[10];
            char label2[10];
            char label3[10];
            char aux_num0[10];                      // Enderecos da lista operada
            char aux_num1[10];                      // Espacos alocados
            char aux_num2[10];                      // Elementos da lista operada
            char aux_num3[10];
            char aux_num4[10];
            char aux_num5[10];
            char aux_num6[10];

            (*ger_codigo_var)++;
            sprintf(aux_num0, "%d", *ger_codigo_var);
            strcpy(aux_str, "mov $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);             // Armazena em aux_num0 o endereco da lista operada

            (*ger_codigo_var)++;
            sprintf(aux_num1, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmema $");           // Aloca memoria e coloca em aux_num1
            strcat(aux_str, aux_num1);
            strcat(aux_str, ", 2\n");

            strcat(aux_str, "mov ");
            strcat(aux_str, temp);                  
            strcat(aux_str, ", 0");

            (*ger_codigo_var)++;
            sprintf(aux_num6, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num6);                  
            strcat(aux_str, ", 0\nL");

            sprintf(label, "%d", *label_cont);
            strcat(aux_str, label);                 // Escreve label
            (*label_cont)++;

            (*ger_codigo_var)++;
            sprintf(aux_num2, "%d", *ger_codigo_var);
            strcat(aux_str, ":\nmov $");
            strcat(aux_str, aux_num2);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, "[0]\n");               // Copia o valor do elemento atual de aux_num0 para aux_num2

            if(op_especial == 1) {                  // Caso tenha cast de float para int
                strcat(aux_str, "fltoint $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, ", $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, "\n");
            } else if(op_especial == 2) {           // Caso tenha cast de int para float
                strcat(aux_str, "inttofl $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, ", $");
                strcat(aux_str, aux_num2);
                strcat(aux_str, "\n");
            }

            strcat(aux_str, "param $");           // Define o parametro
            strcat(aux_str, aux_num2);

            strcat(aux_str, "\ncall ");             // Chamada
            strcat(aux_str, operando1);
            strcat(aux_str, ", 1");

            (*ger_codigo_var)++;
            sprintf(aux_num3, "%d", *ger_codigo_var);
            strcat(aux_str, "\npop $");             // Pega o retorno e armazena em aux_num1[0]
            strcat(aux_str, aux_num3);

            sprintf(label2, "%d", *label_cont);
            (*label_cont)++;

            strcat(aux_str, "\nbrz L");             // Pula para uma label caso o resultado da funcao seja 0
            strcat(aux_str, label2);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num3);

            sprintf(label3, "%d", *label_cont);
            (*label_cont)++;

            strcat(aux_str, "\nbrnz L");            // Pula para uma label para se evitar que passe para temp a referencia de uma lista vazia
            strcat(aux_str, label3);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num6);

            strcat(aux_str, "\nmov ");
            strcat(aux_str, temp);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num1);

            strcat(aux_str, "\nmov $");             // Flag que evita que entre nessa condicao de novo
            strcat(aux_str, aux_num6);
            strcat(aux_str, ", 1\nL");
            strcat(aux_str, label3);


            strcat(aux_str, ":\nmov $");            // Copia o valor da lista operada para a nova
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[0], $");
            strcat(aux_str, aux_num2);

            (*ger_codigo_var)++;
            sprintf(aux_num4, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmema $");              // Aloca memoria e coloca o ponteiro em aux_num1[1]
            strcat(aux_str, aux_num4);
            strcat(aux_str, ", 2");

            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[1], $");
            strcat(aux_str, aux_num4);


            (*ger_codigo_var)++;
            sprintf(aux_num5, "%d", *ger_codigo_var);
            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num5);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num1);

            strcat(aux_str, "\nmov $");               // Copia para aux_num1 o proximo endereco de aux_num1
            strcat(aux_str, aux_num1);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num1);
            strcat(aux_str, "[1]\n");

            strcat(aux_str, "L");
            strcat(aux_str, label2);

            strcat(aux_str, ":\nmov $");               // Copia para aux_num0 o proximo endereco de aux_num0
            strcat(aux_str, aux_num0);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);
            strcat(aux_str, "[1]\n");

            strcat(aux_str, "brnz L");               // Se nao for o ultimo endereco (0), volta pro comeco
            strcat(aux_str, label);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num0);

            strcat(aux_str, "\nmov $");
            strcat(aux_str, aux_num5);
            strcat(aux_str, "[1], 0");

            strcat(aux_str, "\nmemf $");
            strcat(aux_str, aux_num1);
            
            invertido = -1;
        }

        // Para inverter a ordem dos operadores nas operacoes slt e sleq
        if(invertido == 0) {
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, operando1);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);
        } else if(invertido == 1){
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);
            strcat(aux_str, ", ");
            strcat(aux_str, operando1);
        }
    }


    strcat(aux_str, "\n");
    // Caso seja para concatenar com a instrucao de incremento do final do for
    if(incremento == 1)
        strcat(inst_incremento, aux_str);
    else
        fputs(aux_str, escrita);
    
    // Se o valor temporario do no sera a nova variavel temporaria ou do no1
    if(opcao_var == 0)
        strcpy(no->valor_temp, temp);
    else
        strcpy(no->valor_temp, no->no1->simbolo->var_temp);
    
    (*ger_codigo_var)++;
}


/*
    Metodo que escreve as instrucoes de casting
    Argumentos: os operandos, o ponteiro para o contador de variaveis temporarias, o arquivo de escrita, o no atual, uma flag e a string da instrucao de incremento do for
*/
void geraCasting(char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento) {
    char aux_str[200] = "";
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    if(no != NULL) {
        if(no->no1 != NULL) {
            // Se o no1 tiver casting de int para float
            if(!strcmp(no->no1->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
            // Se o no1 tiver casting de float para int
            else if(!strcmp(no->no1->nome, "(float_to_int)"))
                strcpy(aux_str, "fltoint ");
            if(!strcmp(no->no1->nome, "(int_to_float)") || !strcmp(no->no1->nome, "(float_to_int)")) {
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcat(aux_str, "\n");
                if(incremento == 1)
                    strcat(inst_incremento, aux_str);
                else
                    fputs(aux_str, escrita);
                strcpy(no->no1->valor_temp, temp);
                strcpy(operando1 , temp);
                (*ger_codigo_var)++;
            }
        }

        if(no->no2 != NULL) {
            // Se o no2 tiver casting de int para float
            if(!strcmp(no->no2->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
            // Se o no2 tiver casting de float para int
            else if(!strcmp(no->no2->nome, "(float_to_int)"))
                strcpy(aux_str, "fltoint ");
            if(!strcmp(no->no2->nome, "(int_to_float)") || !strcmp(no->no2->nome, "(float_to_int)")) {
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando2);
                strcat(aux_str, "\n");
                if(incremento == 1)
                    strcat(inst_incremento, aux_str);
                else
                    fputs(aux_str, escrita);
                strcpy(no->no2->valor_temp, temp);
                strcpy(operando2 , temp); 
                (*ger_codigo_var)++;
            }
        }
    }
}


/*
    Metodo que escreve operacoes relacionadas a label e empilha a label
    Argumentos: ponteiro para o contador da label, a opcao de operacao, o operador, o arquivo de escrita, o topo da pilha de label e uma flag de que ja foi escrito o brz
*/
void mandaLabel(int *label_cont, int opcao, char *operador, FILE *escrita, struct pilhaLabel **topo, int *flag_brz) {
    char aux_str[200];
    char aux_num[10];
    char label[11];
    sprintf(aux_num, "%d", *label_cont);
    strcpy(label, "L");
    strcat(label, aux_num);
    if(opcao == 0 && *flag_brz == 0) {
        strcpy(aux_str, "brz ");
        strcat(aux_str, label);
        strcat(aux_str, ", ");
        strcat(aux_str, operador);
        strcat(aux_str, "\n");
    } else if(opcao == 1) {
        strcpy(aux_str, label);
        strcat(aux_str, ":\n");
    }
    if(*flag_brz == 0)
        fputs(aux_str, escrita);
    (*label_cont)++;
    *flag_brz = 0;

    pushLabel(topo, label);
}


/*
    Metodo que escreve o arquivo que contem o .table
    Argumentos: arquivo de escrita, um elemento da tabela de simbolos e um contador do numero de strings
*/
void escreveTable(FILE *arquivo, struct tabelaSimb *prim, int contador_string) {
    if(prim != NULL) {
        // Se for string, a declara na forma char s0 = "..."
        if(!strcmp(prim->tipo, "string")) {
            char aux[500];
            char num[5];
            strcpy(aux, "char s");
            sprintf(num, "%d", contador_string);
            strcat(aux, num);
            strcat(aux, "[] = ");
            strcat(aux, prim->simbolo);
            strcat(aux, "\n");
            fputs(aux, arquivo);
            contador_string++;
        }
        // Se for variavel global
        if(prim->escopo == 0 && !strcmp(prim->varOuFunc, "variavel")) {
            char aux[200];
            if(!strcmp(prim->tipo, "int") || !strcmp(prim->tipo, "float"))
                strcpy(aux, prim->tipo);
            // Variaveis globais de lista tem como tipo inteiro
            else
                strcpy(aux, "int");
            strcat(aux, " ");
            strcat(aux, prim->simbolo);
            strcat(aux, " = ");
            if(!strcmp(prim->tipo, "int") || !strcmp(prim->tipo, "int list") || !strcmp(prim->tipo, "float list")) {
                strcat(aux, "0\n");
            } else if(!strcmp(prim->tipo, "float")) {
                strcat(aux, "0.0\n");
            }
            fputs(aux, arquivo);
        }

        escreveTable(arquivo, prim->prox, contador_string);
    }
}


/*
    Metodo que une o arquivo que contem o .table com .code
    Argumentos: ponteiros para o arquivo com a juncao, o arquivo do .code e o arquivo do .table
*/
void uneArquivos(FILE *final, FILE *code, FILE *table) {
    char caracter;
    while((caracter = fgetc(table)) != EOF)
        fputc(caracter, final);

    fputs("\n", final);
    
    while((caracter = fgetc(code)) != EOF) 
        fputc(caracter, final);
}