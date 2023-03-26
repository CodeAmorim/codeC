#include <stdio.h>

int raiz_quadrada(int n) {
    int i = 1;
    while (n > 0) {
        n -= i;
        i += 2;
    }
    return (n == 0) ? (i-1)/2 : -1;
}

int main() {
    int n;
    printf("Digite um numero inteiro para calcular a raiz quadrada: ");
    scanf("%d", &n);
    int resultado = raiz_quadrada(n);
    if (resultado == -1) {
        printf("O numero %d nao possui raiz quadrada exata\n", n);
    } else {
        printf("A raiz quadrada exata de %d eh %d\n", n, resultado);
    }
    return 0;
}

