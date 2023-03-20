#include <stdio.h>

int main(){
    int vetA[15];
	int vetB[15];
	int i = 0;
	
	for(i = 0; i < 15; i++) {
		printf("Digite um numero: ");
		scanf("%d", &vetA[i]);
	}
	
	i = 0;
	for(i = 0; i < 15; i++) {
		vetB[i] = vetA[i] * vetA[i];
	}
	
	printf("\nVetor A:\n");
	i = 0;
	for(i = 0; i < 15; i++) {
		printf("Posição %d: %d\n", i + 1, vetA[i]);
	}
	
	printf("\nVetor B:\n");
	i = 0;
	for(i = 0; i < 15; i++) {
		printf("Posição %d: %d\n", i + 1, vetB[i]);
	}
	
	return 0;
}
