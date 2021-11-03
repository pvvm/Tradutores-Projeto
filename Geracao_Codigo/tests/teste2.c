float coisa(int a) {
    return a + 1;
}

int teste(int a) {
    return a > 5;
}

int main() {
    int a;
    float b;
    int c;
    b = b * 2 * 1;
    c = -b;
    b = !b;
    a = b + c * 3 - 20.3 < 20 - - 1;
    b = 20 > 12;
    b = 31 <= 20;
    b = 31 >= 20;
    b = a == c;
    b = a != c;
    b = a + c && b || c;

    float list lista;
    /*lista = 5 : NIL;

    %NIL;
    !NIL;
    ?NIL;

    lista = coisa >> NIL;*/
    lista = 55 : lista;
    lista = 20 : lista;
    writeln(?lista);
    lista = 1 : lista;
    writeln(?lista);
    lista = 6 : lista;
    writeln(?lista);

    float list lista2;

    lista2 = coisa >> lista;

    writeln("Lista 1:");
    writeln(?lista);
    writeln(?!lista);

    writeln("Lista 2:");

    float list lista3;
    lista3 = teste << lista2;

    writeln("Lista 3:");
    writeln(?lista3);
    writeln(?!lista3);
    writeln(?%lista3);
    writeln(?!lista3);
    writeln(?%lista3);
    writeln(?lista3);

    writeln(a + 20 - - 1.3 * 5);
}