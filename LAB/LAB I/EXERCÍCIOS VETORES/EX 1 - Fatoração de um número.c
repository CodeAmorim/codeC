#include <stdio.h>

int fatorial(int valor) {
    int resultado = 1;
    int i;
    for(i=valor;i>0;i--) {
        printf("%d, %d, %d\n", i, resultado, resultado * i);
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    int res = fatorial(4);
    printf("%d", res);
    return 0;
}
