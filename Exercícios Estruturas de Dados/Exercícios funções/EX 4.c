#include <stdio.h>

int maior_que_valor(int num) {
    int valor;
    printf("Digite um valor inteiro para comparacao: ");
    scanf("%d", &valor);

    if (num > valor) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (maior_que_valor(num)) {
        printf("%d e maior que o valor informado\n", num);
    } else {
        printf("%d nao e maior que o valor informado\n", num);
    }

    return 0;
}

