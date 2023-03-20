#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void conversor(int num){
	int bin[8];
	int aux;
	
	for(aux =7; aux >= 0; aux--){
		if(num % 2 ==0){
			bin[aux] = 0;
		}else{
			bin[aux] = 1;
		}
		num = num / 2;
	}
	
	for(aux = 0; aux < 8; aux++){
		printf("%d", bin[aux]);
	}
	printf("\n");
}

int main(){
	int num;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número decimal: ");
	scanf("%d", &num);
	printf("\n");
	
	conversor(num);
}
