#include <stdio.h>

void troca(int *a, int *b, int *c) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    troca(&a, &b, &c);

    printf("Apos a troca, os valores sao: A=%d, B=%d, C=%d\n", a, b, c);

    return 0;
}

