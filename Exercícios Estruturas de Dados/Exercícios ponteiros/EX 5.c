#include <stdio.h>

void mostrar_elementos_pares(int* vetor, int tamanho) {
	int i;
	
    printf("Elementos de indice par: ");
    for (i = 0; i < tamanho; i += 2) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(vetor) / sizeof(int);
    
    mostrar_elementos_pares(vetor, tamanho);
    
    return 0;
}

