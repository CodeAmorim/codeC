#include <stdio.h>

int contar_impares(int* vetor, int tamanho) {
    int i, contador = 0;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetor[] = {1, 2, 8, 7, 5};
    int tamanho = sizeof(vetor) / sizeof(int);
    
    int quantidade_impares = contar_impares(vetor, tamanho);
    printf("A quantidade de numeros impares no vetor e: %d\n", quantidade_impares);
    
    return 0;
}

