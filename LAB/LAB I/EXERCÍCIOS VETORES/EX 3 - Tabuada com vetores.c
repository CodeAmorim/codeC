#include <stdio.h>

int main(){
    int resultado[10];
	int tabuada[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int num;
	int i = 0;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	printf("\nTABUADA DO %d\n", num);
	
	for(i = 0; i < 10; i++) {
		resultado[i] = num * tabuada[i];
		printf("%d x %d = %d\n", num, tabuada[i], resultado[i]);
	}
	
	return 0;
}
