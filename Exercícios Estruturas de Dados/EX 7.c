#include <stdio.h>

float calcular_desconto(float valor, float desconto) {
    float valor_com_desconto = valor * (1 - desconto/100);
    return valor_com_desconto;
}

float calcular_preco_total(float valor_com_desconto, int quantidade) {
    float preco_total = valor_com_desconto * quantidade;
    return preco_total;
}

int main() {
    float valor_produto, desconto;
    int quantidade;
    
    printf("Informe o valor do produto: ");
    scanf("%f", &valor_produto);
    
    printf("Informe a porcentagem do desconto: ");
    scanf("%f", &desconto);
    
    printf("Informe a quantidade: ");
    scanf("%d", &quantidade);
    
    float valor_com_desconto = calcular_desconto(valor_produto, desconto);
    float preco_total = calcular_preco_total(valor_com_desconto, quantidade);
    
    printf("Preco original do produto: R$ %.2f\n", valor_produto);
    printf("Desconto: %.2f%%\n", desconto);
    printf("Preco com desconto: R$ %.2f\n", valor_com_desconto);
    printf("Preco total da venda: R$ %.2f\n", preco_total);
    
    return 0;
}

