#include <stdio.h>

int main(){
    int vet[15];
	int i = 0;
	int contador = 0;
	
	for(i = 0; i < 15; i++) {
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	
	i = 0;
	for(i = 0; i < 15; i++) {
		if(vet[i] > 5) {
			contador = contador + 1;
		}
	} 
	
	printf("Total de numeros maiores que 5: %d", contador);
	
	return 0;
}
