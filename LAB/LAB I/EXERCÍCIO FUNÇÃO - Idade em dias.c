#include <stdio.h>
int calculo(int idade) {
    int res;
    res = (idade * 12) * 30;
    return res;
}


int main() {
    int idade, resultado;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    resultado = calculo(idade);
    
    printf("A sua idade em dias é: %d dias", resultado);
    
    

    return 0;
}
