#include <stdio.h>

int main() {
    int garrafao = 20000, hora = 0, furo = 100, consumo;
    
    printf("Digite 1 se tiver consumo ou 0 se n�o tiver consumo: ");
    scanf("%d", &consumo);
    
    if(consumo == 1) {
        while(garrafao > 0) {
            garrafao = garrafao - (furo + 300);
            hora = hora + 1;
            
        }
        printf("Ir� levar %d horas para esvaziar o galao de 20 litros com vaz�o de 400ml por hora", hora);
    } else if(consumo == 0) {
        while(garrafao > 0) {
            garrafao = garrafao - 100;
            hora = hora + 1;
            
        }
        printf("Ir� levar %d horas para esvaziar o galao de 20 litros com vaz�o de 100ml por hora", hora);
    }   

    return 0;
}
