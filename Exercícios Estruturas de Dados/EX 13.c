#include <stdio.h>

float pesoIdeal(float altura, char sexo) {
    float peso;
    if (sexo == 'M' || sexo == 'm') {
        peso = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = 62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido.\n");
        peso = 0;
    }
    return peso;
}

int main() {
    float altura;
    char sexo;
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Peso ideal: %.2f kg\n", pesoIdeal(altura, sexo));
    return 0;
}

