/******************************************************************************

7. Ler informações sobre 10 pessoas de um grupo. Para cada pessoa deve ser lida a altura e o
sexo. Fazer um algoritmo que calcule e mostre:
a) A maior e a menor altura do grupo;
b) A média das alturas das mulheres;
c) A média das alturas de todos do grupo. 

*******************************************************************************/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int pessoa=0, mulheres=0, homens=0;
	float maior=0, menor=0, altura=0, somah=0,somahh=0, media=0, mediat=0;
	char sexo;
	for(pessoa;pessoa<10;pessoa++){
		fflush;
		printf("Pessoa %d digite F para feminino e M para masculino: ", pessoa);
		scanf("%c", &sexo);
		
		printf("Pessoa %d digite a sua altura: ", pessoa);
		scanf("%f", &altura);
	
		if (sexo=='F'){
			mulheres++;
			somah= altura+somah;
			media= somah/mulheres;
		}else if (sexo=='M'){
			homens++;
			somahh=altura+somahh;
		}
			if (altura>maior){
			maior=altura;
			}else if (altura<maior){
			menor=altura;
			} 			
	}
	mediat= (somah+somahh)/(mulheres+homens);
	printf("Media de altura das mulheres é:%f\n ", media);
	printf("Menor altura é:%f\n", menor);
	printf("Maior altura é:%f\n", maior);
	printf("Media do grupo é: %f", mediat);
	
	
	return 0;
}
