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
	
	
	/*Na primeira execu��o - scanf - (nome1), ele printa somente o primeiro nome
	  Na segunda execu��o - gets -(nome2), ele printa o nome todo. Incluindo os espa�os em branco.*/
	
	/*Enquanto o scanf armazena somente caracteres digitados e n�o espa�os tamb�m,
	o gets armazena ambos. Ent�o se uma pessoa for digitar o nome completo, deve
	ser usado o gets, pois ele armazena os espa�os tamb�m.*/
}
