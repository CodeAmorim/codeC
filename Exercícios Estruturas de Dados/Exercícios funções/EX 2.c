#include <stdio.h>

// fun��o para verificar se um n�mero � �mpar
int isImpar(int num) {
    if (num % 2 != 0) {
        return 1; // n�mero � �mpar
    } else {
        return 0; // n�mero n�o � �mpar
    }
}

int main() {
    int numeros[10];
    int i, count = 0;

    // leitura dos n�meros
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // contagem dos numeros impares
    for (i = 0; i < 10; i++) {
        if (isImpar(numeros[i])) {
            count++;
        }
    }

    printf("A quantidade de numeros impares e: %d\n", count);

    return 0;
}

