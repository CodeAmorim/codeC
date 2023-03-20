#include <stdio.h>

int main() {
    
    float servicos;
    int diaria;

    printf("Digite quantos dias ficou hospedado: ");
    scanf("%d", &diaria);
    
    if(diaria >= 15) {
        servicos = (115 + 8.5) * diaria;
        printf("O valor total a ser pago (diárias + taxas) é de R$%.2f", servicos);
    } else if(diaria >= 10 && diaria <= 14) {
        servicos = (115 + 9.5) * diaria;
        printf("O valor total a ser pago (diárias + taxas) é de R$%.2f", servicos);
        } else if(diaria < 10 && diaria != 0) {
            servicos = (115 + 11.5) * diaria;
            printf("O valor total a ser pago (diárias + taxas) é de R$%.2f", servicos);
            }
    return 0;
}
