#include <stdio.h>

int main() {
    int valor, contador = 0, quantidade = 0, menor = 0;
    
    for (contador = 0; contador < 5; contador++) {
        printf("\nDigite um valor: ");
        scanf("%d", &valor);
        
        if (contador == 0) {
            menor = valor;
            printf("O menor valor �: %d\n", menor);
        }
        else if (valor < menor) {
            menor = valor;
            quantidade = 0;
            printf("Novo menor valor: %d\n", valor);
        } else if (valor == menor) {
            quantidade = quantidade + 1;
        }
    }
    printf("Quantidade de n�meros iguais ao menor n�mero digitado: %d", quantidade);
    return 0;
}
