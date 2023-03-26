#include <stdio.h>

float calcular_aceleracao(float vi, float vf, float t) {
    float aceleracao = (vf - vi) / t;
    return aceleracao;
}

int main() {
    float velocidade_inicial, velocidade_final, intervalo_tempo, aceleracao;
    
    printf("Digite a velocidade inicial: ");
    scanf("%f", &velocidade_inicial);
    
    printf("Digite a velocidade final: ");
    scanf("%f", &velocidade_final);
    
    printf("Digite o intervalo de tempo correspondente: ");
    scanf("%f", &intervalo_tempo);
    
    aceleracao = calcular_aceleracao(velocidade_inicial, velocidade_final, intervalo_tempo);
    
    printf("A aceleracao eh: %.2f\n", aceleracao);
    
    return 0;
}

