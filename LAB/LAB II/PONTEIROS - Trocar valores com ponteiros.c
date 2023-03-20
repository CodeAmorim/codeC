#include <stdio.h>
void trocar(int *x, int *y){
    int aux;
    // O ponteiro aponta para o endereço de memoria recebido e atribui o valor desse endereço
    // para o outra variavel
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int a = 2;
    int b = 9;
    trocar(&a, &b);
    printf("%d %d", a, b);

    return 0;
}
