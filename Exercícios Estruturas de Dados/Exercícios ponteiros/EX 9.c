#include <stdio.h>
#include <stdlib.h>

int* criar_vetor_impares(int* vetor, int tamanho, int* tamanho_vetor_impares) {
    int i, contador = 0;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            contador++;
        }
    }
    
    int* vetor_impares = (int*) malloc(contador * sizeof(int));
    
    int j = 0;
    
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            vetor_impares[j] = vetor[i];
            j++;
        }
    }
    
    *tamanho_vetor_impares = contador;
    return vetor_impares;
}

int main() {
    int i, vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(int);
    int tamanho_vetor_impares;
    
    int* vetor_impares = criar_vetor_impares(vetor, tamanho, &tamanho_vetor_impares);
    
    printf("Vetor de impares: ");
    for (i = 0; i < tamanho_vetor_impares; i++) {
        printf("%d ", vetor_impares[i]);
    }
    printf("\n");
    
    free(vetor_impares);
    
    return 0;
}

