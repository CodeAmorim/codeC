#include <stdio.h>

float adicao(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro: divisao por zero.\n");
        return 0;
    }
    else {
        return num1 / num2;
    }
}

int main() {
    int opcao;
    float num1, num2, resultado;
    
    do {
        printf("\nEscolha uma operacao:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = adicao(num1, num2);
                printf("Resultado da adicao: %.2f\n", resultado);
                break;
            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = subtracao(num1, num2);
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = multiplicacao(num1, num2);
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = divisao(num1, num2);
                printf("Resultado da divisao: %.2f\n", resultado);
                break;
            case 0:
                printf("\nEncerrando o programa.\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}

