#include <stdio.h>
#include <stdlib.h>

int* create_int_array(int size) {
    int* array = malloc(size * sizeof(int)); // aloca mem�ria para o vetor de inteiros
    return array;
}

int main() {
    int size;
    int i;
    // solicita ao usu�rio o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    
    int* array = create_int_array(size);
    
    // preenche o vetor com alguns valores
    for (i = 0; i < size; i++) {
        array[i] = i * 2;
    }
    
    // imprime os valores do vetor
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // libera a mem�ria alocada para o vetor
    free(array);
    
    return 0;
}

