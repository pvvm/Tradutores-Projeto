#include "../lib/ger_cod.h"

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

void geraOperacoes(char *operador, char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento, int op_especial, int *label_cont, int *string_cont) {
    char aux_str[300];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "");
    int opcao_var = 0;
    int so_um_operando = 0;
    int op_lista = 0;

    // Operacoes unarias
    if(operando2 == NULL) {
        if(op_especial == 0) {
            if(!strcmp(operador, "-")) {
                strcpy(aux_str, "minus ");
                strcat(aux_str, temp);
            } else if(!strcmp(operador, "!")) {
                if(!strcmp(no->tipo, "int") || !strcmp(no->tipo, "float")) {
                    strcpy(aux_str, "not ");
                    strcat(aux_str, temp);
                } else if(!strcmp(no->tipo, "int list") || !strcmp(no->tipo, "float list")) {
                    strcpy(aux_str, "mov ");
                    strcat(aux_str, temp);
                    op_lista = 2;
                }
            } else if(!strcmp(operador, "?")){
                strcpy(aux_str, "mov ");
                strcat(aux_str, temp);
                op_lista = 1;
            } else if(!strcmp(operador, "%")){
                strcpy(aux_str, "mov ");
                strcat(aux_str, temp);
                op_lista = 2;
            } else if(!strcmp(operador, "=")) {
                opcao_var = 1;
                strcpy(aux_str, "mov ");
                strcat(aux_str, no->no1->simbolo->var_temp);
                //printf("%s\n\n", operando1);
                //(*ger_codigo_var)--;      Comentei pra evitar que mov nao aumentasse esse numero
            } else if(!strcmp(operador, "write")) {
                strcpy(aux_str, "print ");
                so_um_operando = 1;
            } else if(!strcmp(operador, "writeln")) {
                strcpy(aux_str, "println ");
                so_um_operando = 1;
            } else if(!strcmp(operador, "read")) {
                if(!strcmp(no->no1->simbolo->tipo, "int"))
                    strcpy(aux_str, "scani ");
                else if(!strcmp(no->no1->simbolo->tipo, "float"))
                    strcpy(aux_str, "scanf ");
                so_um_operando = 1;
            } else if(!strcmp(operador, "return")) {
                strcpy(aux_str, "return ");
                so_um_operando = 1;
            } else if(!strcmp(operador, "parameter")) {
                strcpy(aux_str, "param ");
                so_um_operando = 1;
            }
            if(so_um_operando == 0)
                strcat(aux_str, ", ");
            
            strcat(aux_str, operando1);
        
            if(op_lista == 1)
                strcat(aux_str, "[0]");
            else if(op_lista == 2)
                strcat(aux_str, "[1]");

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
            sprintf(aux_num1, "%d", ((int)strlen(operando1) - 2));    // TIRAR O -2 CASO DE PROBLEMA
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
        //printf("%s, %s\n\n", operando1, operando2);
        if(!strcmp(operador, "*")) {
            strcpy(aux_str, "mul ");
        } else if(!strcmp(operador, "/")) {
            strcpy(aux_str, "div ");
        } else if(!strcmp(operador, "-")) {
            strcpy(aux_str, "sub ");
        } else if(!strcmp(operador, "+")) {
            strcpy(aux_str, "add ");
        } else if(!strcmp(operador, "<")) {
            strcpy(aux_str, "slt ");
        } else if(!strcmp(operador, ">")) {
            strcpy(aux_str, "slt ");
            invertido = 1;
        } else if(!strcmp(operador, "<=")) {
            strcpy(aux_str, "sleq ");
        } else if(!strcmp(operador, ">=")) {
            strcpy(aux_str, "sleq ");
            invertido = 1;
        } else if(!strcmp(operador, "==")) {
            strcpy(aux_str, "seq ");
        } else if(!strcmp(operador, "!=")) {
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
        } else if(!strcmp(operador, "&&")) {
            strcpy(aux_str, "and ");
        } else if(!strcmp(operador, "||")) {
            strcpy(aux_str, "or ");
        } else if(!strcmp(operador, ":")) {
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
        
        } else if(!strcmp(operador, "<<")) {
            char label[10];
            char label2[10];
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

            // MUDA AQUI
            sprintf(label2, "%d", *label_cont);
            (*label_cont)++;

            strcat(aux_str, "\nbrz L");
            strcat(aux_str, label2);
            strcat(aux_str, ", $");
            strcat(aux_str, aux_num3);
            //

            strcat(aux_str, "\nmov $");
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
    if(incremento == 1)
        strcat(inst_incremento, aux_str);
    else
        fputs(aux_str, escrita);
    
    if(opcao_var == 0)
        strcpy(no->valor_temp, temp);
    else
        strcpy(no->valor_temp, no->no1->simbolo->var_temp);
    
    (*ger_codigo_var)++;
}

void geraCasting(char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento) {
    char aux_str[200] = "";
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    //printf("%s %s\n\n", no->no1->nome, no->no2->nome);
    if(no != NULL) {
        if(no->no1 != NULL) {
            if(!strcmp(no->no1->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
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
                strcpy(operando1 , temp);           // Gambiarra pra fazer o mov pegar como operando o valor do inttofl e fltoint
                (*ger_codigo_var)++;
            }
        }

        if(no->no2 != NULL) {
            if(!strcmp(no->no2->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
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
                strcpy(operando2 , temp);           // Gambiarra pra fazer o mov pegar como operando o valor do inttofl e fltoint
                (*ger_codigo_var)++;
            }
        }
    }
}

void mandaLabel(int *label_cont, int opcao, char *operador, FILE *escrita, struct pilhaLabel **topo) {
    char aux_str[200];
    char aux_num[10];
    char label[11];
    sprintf(aux_num, "%d", *label_cont);
    strcpy(label, "L");
    strcat(label, aux_num);
    if(opcao == 0) {
        strcpy(aux_str, "brz ");
        strcat(aux_str, label);
        strcat(aux_str, ", ");
        strcat(aux_str, operador);
        strcat(aux_str, "\n");
    } else if(opcao == 1) {
        strcpy(aux_str, label);
        strcat(aux_str, ":\n");
    }
    fputs(aux_str, escrita);
    (*label_cont)++;

    pushLabel(topo, label);
}

void escreveTable(FILE *arquivo, struct tabelaSimb *prim, int contador_string) {
    if(prim != NULL) {
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
        if(prim->escopo == 0 && !strcmp(prim->varOuFunc, "variavel")) {
            char aux[200];
            if(!strcmp(prim->tipo, "int") || !strcmp(prim->tipo, "float"))
                strcpy(aux, prim->tipo);
            else
                strcpy(aux, "int");
            strcat(aux, " ");
            strcat(aux, prim->var_temp);
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

void uneArquivos(FILE *final, FILE *code, FILE *table) {
    char caracter;
    while((caracter = fgetc(table)) != EOF)
        fputc(caracter, final);

    fputs("\n", final);
    
    while((caracter = fgetc(code)) != EOF) 
        fputc(caracter, final);
}