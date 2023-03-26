#include <stdio.h>


int temCaracteristica(int n) {
    int soma = (n / 100) + (n % 100); // calcula a soma dos dois primeiros e dois últimos dígitos
    int quadrado = soma * soma; // calcula o quadrado da soma
    return quadrado == n; // retorna se o quadrado da soma é igual ao número original
}

int main() {
    int i;
    for (i = 1000; i <= 9999; i++) {
        if (temCaracteristica(i)) {
            printf("%d\n", i); // imprime o número se possuir a característica
        }
    }
    return 0;
}

