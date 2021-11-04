float calcula_imc(float list valores) {
    float peso2;
    float altura2;
    altura2 = ?valores;
    peso2 = ?!valores;
    return(peso2 / (altura2 * altura2));

}

int classifica_imc(float imc) {
    if (imc < 18.5) {
        writeln("Abaixo do normal");
        return 1;
    }
    if (18.6 <= imc && imc <= 24.9) {
        writeln("Peso ideal");
        return 1;
    }
    if (25 <= imc && imc <= 29.9) {
        writeln("Acima do peso");
        return 1;
    }
    if (29.9 < imc) {
        writeln/*aqui*/("Obesidade grau I para cima");
        return 1;
    }
}

int main() {
    float list valores;
    float peso;
    float altura;

    writeln("Digite o seu peso em quilos: ");
    read(peso);
    valores = peso : valores;

    writeln("Digite a sua altura em metros: ");
    read(altura);
    valores = altura : valores;

    float imc;
    imc = calcula_imc(valores);
    classifica_imc(imc);

}