#include <stdio.h>

void mostrar_inverso_recursivo(int* vetor, int tamanho) {
    if (tamanho == 0) { // caso base
        return;
    } else {
        printf("%d ", vetor[tamanho - 1]); // mostra o último elemento
        mostrar_inverso_recursivo(vetor, tamanho - 1); // chama a si mesma com um vetor menor
    }
}

int main() {
    int i, tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Vetor em ordem inversa: ");
    mostrar_inverso_recursivo(vetor, tamanho);
    printf("\n");
    return 0;
}

