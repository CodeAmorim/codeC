#include <stdio.h>

int main(void){
	char nome1[40], nome2[40];
	
	//scanf e gets
	printf("Digite seu nome1: ");
	scanf("%s", &nome1);
	
	printf("Digite seu nome2: ");
	fflush(stdin);
	gets(nome2);
	fflush(stdin);
	printf("\nSeu nome e: %s", nome1);
	printf("\nSeu nome e: %s", nome2);
	
	
	/*Na primeira execução - scanf - (nome1), ele printa somente o primeiro nome
	  Na segunda execução - gets -(nome2), ele printa o nome todo. Incluindo os espaços em branco.*/
	
	/*Enquanto o scanf armazena somente caracteres digitados e não espaços também,
	o gets armazena ambos. Então se uma pessoa for digitar o nome completo, deve
	ser usado o gets, pois ele armazena os espaços também.*/
}
