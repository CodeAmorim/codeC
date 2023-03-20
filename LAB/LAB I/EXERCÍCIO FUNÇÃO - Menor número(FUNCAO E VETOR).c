#include <stdio.h>

int condicao(int *vet) {
    int i = 0;
    int menor = vet[0];
    
    for(i = 0; i < 10; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    return menor;
}

int impares(int *vet) {
    int i = 0;
    int impar;
    for(i = 0; i < 10; i++) {
        if(vet[i] % 2 ==! 0) {
            impar = printf(" %d,", vet[i]);    
        }
    }
    
    return impar;
}



int main() {
    int vet[10];
    int i = 0;
    int resultado1, resultado2;
    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    resultado1 = condicao(vet);
    
    printf("\nO menor numero é: %d\n", resultado1);
    
    printf("%d", resultado2 = impares(vet));
    
    return 0;
}
