#include <stdio.h>

int desconto(int nota) {
    if(nota >= 7) {
        return 1;
    } else {
        return 0;
    }
}

int soma(int A, int B) {
    int resultado = A + B - desconto(A + B);
    return resultado;
}

int main() {
    int res = soma(4, 3);
    printf("%d", res);
    return 0;
}
