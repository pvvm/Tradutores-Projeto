int a;
int teste;

int repete() {
    int a;
    int b;
    int c;
    c = 0;
    for(a = 0; a < 3; a = a + 1) {
        for(b = 0; b < 2; b = b + 1) {
            write("c agora eh: ");
            c = c + 1;
            writeln(c);
        }
    }
}

float funcao(int a, int b) {
    writeln(a + b);
    return a == a+b;
}

int main() {
    teste = 20 + 1;
    int e;
    e = a;

    read(a);
    write(a);
    e = teste;
    int a;

    for(a = 0; a < 10; a = a + 1)
        writeln("Vamos imprimir 10 vezes");

    writeln(funcao(3, 7.156));

    a = 2 + funcao(a, e);
    writeln(a);

    writeln("So mais uma vez");
    write(20 + 3);  
    a = 0;
    if(a > 21) {
        writeln("a eh maior que 21");
    } else {
        writeln("a eh menor ou igual a 21");
    }
    int b;
    writeln(e);
    b = 2 * (90 + 2 - - 1) + e;
    writeln(b);

    read(e);
    b = e;

    writeln(b);

    repete();
}