#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int* vetor, int tamanho) {
    int i;
    
	for (i = 0; i < tamanho; i++) {
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void mostrar_vetor(int* vetor, int tamanho) {
	int i;
	
    printf("Valores do vetor: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;
    
    // solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int* vetor = malloc(tamanho * sizeof(int));
    
    preencher_vetor(vetor, tamanho);
    
    mostrar_vetor(vetor, tamanho);
    
    // libera a memória alocada para o vetor
    free(vetor);
    
    return 0;
}

