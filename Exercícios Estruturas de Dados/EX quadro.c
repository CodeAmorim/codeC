#include <stdio.h>

int soma(int *vet){
	int i, soma = 0;
	
	for(i = 0; i <= 9; i++){
		soma += vet[i];
	}
	return soma;
}

int maiorElemento(int *vet){
	int i, maior = vet[0];
	
	for(i = 0; i <= 9; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	return maior;
}

int retornaPonteiroMaior(int *vet){
	int i, *p = vet[0];
	
	for(i = 0; i <= 9; i++){
		if(vet[i] > p){
			p = vet[i];
		}
	}
	return p;
}

int contaImpares(int *vet){
	int i, impares = 0;
	
	for(i = 0; i <= 9; i++){
		if(vet[i] % 2 != 0){
			impares++;
		}
	}
	return impares;
}

int main(){
	
	int i, vet[10];
	
	for(i = 0; i <= 9; i++){
		printf("Digite um valor:");
		scanf("%d", &vet[i]);
	}
	
	printf("\nSoma = %d", soma(vet));
	printf("\nMaior numero = %d", maiorElemento(vet));
	printf("\nPonteiro para o maior = %d", retornaPonteiroMaior(vet));
	printf("\nQuantidade de num impares = %d", contaImpares(vet));
	
	return 0;
}
