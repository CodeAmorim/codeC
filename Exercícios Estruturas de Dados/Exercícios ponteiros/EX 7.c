#include <stdio.h>

int* encontrar_menor_elemento(int* vetor, int tamanho) {
    int i;
	int* menor = vetor;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            menor = &vetor[i];
        }
    }
    return menor;
}

int main() {
    int vetor[] = {3, 2, 5, 4, 1};
    int tamanho = sizeof(vetor) / sizeof(int);
    
    int* menor = encontrar_menor_elemento(vetor, tamanho);
    printf("O menor elemento do vetor e: %d\n", *menor);
    
    return 0;
}

