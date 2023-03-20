#include <stdio.h>

float desconto(float valor, float porcent) {
    float res;
    res = valor - ((valor * porcent) / 100);
    return res;
}

float total_compra(int quantidade, float valor, float porcent) {
    float res; 
    res = quantidade * desconto(valor, porcent);
    return res;
}

int main() {
    float valor, porcentagem, resultado;
    int quantidade;
    printf("Valor do produto: ");
    scanf("%f", &valor);
    
    printf("Desconto do produto: ");
    scanf("%f", &porcentagem);
    
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    
    //resultado1 = desconto(valor, porcentagem);
    
    printf("O valor integral é: R$%2.f\n", valor);
    //printf("O valor com desconto é: R$%2.f\n", resultado1);
    
    resultado = total_compra(quantidade, valor, porcentagem);
    
    printf("O valor total da venda é de: R$%2.f", resultado);
    

    return 0;
}
