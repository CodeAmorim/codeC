#include <stdio.h>

int main() {   
    float peso, pesototal = 0, capacidade;
    int contador;
    
    printf("ELEVADOR PESO VERTICAL\n");
    printf("Digite a capacidade do elevador em KG: ");
    scanf("%f", &capacidade);
    
    printf("\nA seguir digite o peso (em KG) de 5 pessoas: \n");
    
    for(contador = 1; contador < 6; contador++) {
        printf("PESSOA %d: ", contador);
        scanf("%f", &peso);
        
        pesototal = peso + pesototal;
    } 
    
    if(pesototal <= capacidade) {
        printf("\nPESO TOTAL: %2.f KG\n", pesototal);
        printf("\nELEVADOR LIBERADO!");
        } else {
            printf("\nPESO TOTAL: %2.f KG\n", pesototal);
            printf("CARGA MÁXIMA EXCEDIDA");
        }
    return 0;
}
