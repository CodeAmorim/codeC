#include <stdio.h>

int main() {
    int n1, n2, valor, i;
    
    printf("Em que número inicia o intervalo: ");
    scanf("%d", &n1);
    printf("Em que número termina o intervalo: ");
    scanf("%d", &n2);
    printf("Digite um valor adicional: ");
    scanf("%d", &valor);
    
    for(i = n1; i <= n2; i++) {
        if(i % valor == 0) {
            printf("%d é divisível por %d\n", i, valor);
        } else {
            printf("%d não é divisivel por %d\n", i, valor);
        }
    }
    return 0;
}
