#include <stdio.h>

// função para verificar se um número é ímpar
int isImpar(int num) {
    if (num % 2 != 0) {
        return 1; // número é ímpar
    } else {
        return 0; // número não é ímpar
    }
}

int main() {
    int numeros[10];
    int i, count = 0;

    // leitura dos números
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

