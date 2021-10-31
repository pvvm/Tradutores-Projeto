int a;

int funcao(int a, int b) {
    int c;
    c = 9.34;
    writeln((a + b)/2 * 50.3 + c < b - c + a - - c + (b));
    writeln(90 - 81 * c);
    return (a + b)/2 * 50.3 + c < b - c + a - - c + (b) && 90 - 81 * c;
}

int main() {
    read(a);
    int checa;
    checa = 0;
    {
        int a;
        read(a);
        writeln(a);
        if(a > 0) {
            write("O a de dentro maior que zero!");
            write("\n");
            checa = checa + 1;
        }
    }

    if(a > 0) {
        writeln("O a global eh maior que zero!");
        checa = checa + 1;
    } else {
        writeln("Poxa, o a de fora nao eh maior que zero...");
    }

    if(checa == 2) {
        writeln("Poxa, os dois sao maiores que zero!!!");
        writeln("Nesse caso, vamos fazer um calculo...\n");
        read(a);
        int b;
        read(b);
        writeln(funcao(a, b));
    }

    writeln(a);
}