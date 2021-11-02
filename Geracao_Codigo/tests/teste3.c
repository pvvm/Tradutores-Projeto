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
    for(i = 0; i < tamanho; i = i + 1) {
        header = ?lista;
        lista = !lista;
        write(header);
        write(" ");
    }
    lista = 2.3 : lista;
    return 1;
}

int subtrai(int elemento) {
    return elemento - 5;
}

int negativo(int elemento) {
    return elemento < 0;
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

        writeln("Testando map...");
        int list lista1;
        lista1 = subtrai >> lista;
        _write_list(lista1);

        writeln("Testando reduce...");
        int list lista2;
        lista2 = negativo << lista1;
        _write_list(lista2);

    } else {
        writeln("ISSO COM CERTEZA NAO VAI DAR CERTO");
    }
    int sei_la;
    sei_la = 0;

    read(sei_la);
    if(sei_la > 0) {
        if(sei_la > 10) {
            writeln("Eh maior que 10!");
        } else
            writeln("Eh entre 0 e 10");
    } else
        writeln("Negativo, senhor");

    return 0;
}