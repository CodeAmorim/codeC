#include <stdio.h>

int main() {
    int n1, n2, valor, i;
    
    printf("Em que n�mero inicia o intervalo: ");
    scanf("%d", &n1);
    printf("Em que n�mero termina o intervalo: ");
    scanf("%d", &n2);
    printf("Digite um valor adicional: ");
    scanf("%d", &valor);
    
    for(i = n1; i <= n2; i++) {
        if(i % valor == 0) {
            printf("%d � divis�vel por %d\n", i, valor);
        } else {
            printf("%d n�o � divisivel por %d\n", i, valor);
        }
    }
    return 0;
}
