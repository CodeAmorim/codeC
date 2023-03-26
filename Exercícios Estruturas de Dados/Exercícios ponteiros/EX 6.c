#include <stdio.h>

int somar_elementos(int* vetor, int tamanho) {
    int i, soma = 0;
    
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(int);
    
    int soma = somar_elementos(vetor, tamanho);
    printf("A soma dos elementos do vetor e: %d\n", soma);
    
    return 0;
}

