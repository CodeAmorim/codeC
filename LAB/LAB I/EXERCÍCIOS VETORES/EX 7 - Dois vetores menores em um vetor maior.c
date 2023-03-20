#include <stdio.h>

int main(){
    
    float vet[5];
    int i = 0;
    
    for(i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }
    
    i = 0;
    
    for(i = 4; i >= 0; i--) {
        printf("%f\n", vet[i]);
    }
    
    return 0;
}
