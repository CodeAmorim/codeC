#include <stdio.h>


int temCaracteristica(int n) {
    int soma = (n / 100) + (n % 100); // calcula a soma dos dois primeiros e dois �ltimos d�gitos
    int quadrado = soma * soma; // calcula o quadrado da soma
    return quadrado == n; // retorna se o quadrado da soma � igual ao n�mero original
}

int main() {
    int i;
    for (i = 1000; i <= 9999; i++) {
        if (temCaracteristica(i)) {
            printf("%d\n", i); // imprime o n�mero se possuir a caracter�stica
        }
    }
    return 0;
}

