#include <stdio.h>

int main() {

	int vetA[5];
	int vetB[5];
	int i = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetA[i]);	
	}

	i = 0;
	for(i = 0; i < 5; i++) {
		vetB[i] = vetA[i];	
	}
	
	i = 0;
	for(i = 0; i < 5; i++) {
		printf("VetB: %d\n", vetB[i]);	
	}
	
    return 0;
}

