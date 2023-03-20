#include <stdio.h>

int main() {
    int a, b, c, maior;
    
    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);
    printf("Digite o valor C: ");
    scanf("%d", &c);
    
    printf("\nQual o maior valor dentre eles?\n");
    
    (a > b && a > c ? printf("Valor A: %d", a) : (b > a && b > c ? printf("Valor B: %d", b) : (c > a && c > b ? printf("Valor C: %d", c) : printf("Valores iguais"))));
    return 0;
}
