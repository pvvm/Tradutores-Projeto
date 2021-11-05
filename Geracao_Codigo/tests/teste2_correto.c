int sei_la;
int tamanho;

int fibonacci(float num) {
    sei_la = 5;
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int _write_list(int list lista) {
    int i;
    int header;
    int list aux;

    for(aux = lista; aux != NIL; aux = !aux) {
        write(?aux);
        write(" ");
    }
    return 1;
}

int divide(int elemento) {
    return elemento / 2;
}

int filtra(int elemento) {
    return elemento < 50;
}

int main() {
    writeln("Digite um numero positivo: ");
    read(tamanho);

    if(tamanho > 0) {
        int i;
        int list lista;
        lista = NIL;
        for(i = tamanho-1; i >= 0; i = i - 1){
            lista = fibonacci(i) : lista;
        }
        sei_la = (1 - 2 * 3) * 5/-(2 + tamanho);

        write("A sequencia de fibonacci ate a ");
        write(tamanho);
        write(" posicao eh:");
        _write_list(lista);

        writeln("\nTestando map...");
        int list lista1;
        lista1 = divide >> lista;
        _write_list(lista1);

        writeln("\nTestando filter...");
        int list lista2;
        lista2 = filtra << lista1;
        _write_list(lista2);

    } else {
        writeln("ISSO COM CERTEZA NAO VAI DAR CERTO");
    }
    return 0;
}