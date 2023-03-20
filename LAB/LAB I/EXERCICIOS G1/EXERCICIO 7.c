#include <stdio.h>

int main() {
    int i, n, soma = 0;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            soma = soma + i;
        }
    }
    if(soma == n) {
        printf("\n%d é um número perfeito", n);
    } else {
        printf("\n%d não é um número perfeito", n);
    }
    return 0;
}
