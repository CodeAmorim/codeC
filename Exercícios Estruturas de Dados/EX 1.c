#include <stdio.h>
#include <locale.h>
void categoriaNadador(int idade){
	
	if(idade >= 5 && idade <= 7){
		printf("/nCategoria Infantil A");
	}else if(idade >= 8 && idade <= 10){
		printf("Categoria Infantil B");
	}else if(idade >= 11 && idade <= 13){
		printf("Categoria Juvenil A");
	}else if(idade >= 14 && idade <= 17){
		printf("Categoria Juvenil B");
	}else if(idade >= 18){
		printf("Categoria Adulto");
	}else{
		printf("Não existe categoria para essa idade");
	}
}

int main (){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Digite a idade do nadador:");
	scanf("%d", &idade);
	
	categoriaNadador(idade);
	
	return 0;
}
