#include <stdio.h>

int soma_digitos(int n) {
    int soma = 0;
    
    while (n != 0) {
        soma += n % 10;
        n /= 10;
    }
    
    if (soma == 10) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (soma_digitos(n)) {
        printf("A soma dos digitos de %d eh 10\n", n);
    } else {
        printf("A soma dos digitos de %d nao e 10\n", n);
    }
    
    return 0;
}

