#include <stdio.h>

int main() {
    int i, n, soma = 0;
    
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            soma = soma + i;
        }
    }
    if(soma == n) {
        printf("\n%d � um n�mero perfeito", n);
    } else {
        printf("\n%d n�o � um n�mero perfeito", n);
    }
    return 0;
}
