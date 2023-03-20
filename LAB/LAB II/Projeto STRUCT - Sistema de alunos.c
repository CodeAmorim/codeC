#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct SISTEMAESC{ //Definição da estrutura
	char nome[50];
	int idade;
	float notag1;
	float notag2;
	char status[10];
}SISTEMAESC;

int main(void){
	int i;
	setlocale(LC_ALL, "Portuguese");
	SISTEMAESC aluno[3]; // Declaração de um vetor de estruturas
	
	for(i = 0; i < 3; i++){ //Inicializando o vetor da estrutura
		strcpy(aluno[i].nome, "NULL");
		aluno[i].idade = 0;
		aluno[i].notag1 = 0.0;
		aluno[i].notag2 = 0.0;
		strcpy(aluno[i].status, "NULL");
	}
	
	for(i = 0; i < 3; i++){
		printf("\nCADASTRO ALUNO %d\n", i + 1);
		printf("NOME: ");
		fflush(stdin);
		gets(aluno[i].nome);
		fflush(stdin);
		printf("IDADE: ");
		scanf("%d", &aluno[i].idade);
		printf("NOTA G1: ");
		scanf("%f", &aluno[i].notag1);
		fflush(stdin);
		printf("NOTA G2: ");
		scanf("%f", &aluno[i].notag2);
	}
	
	for(i = 0; i < 3; i++){
		printf("\n\nALUNO %d", i);
		printf("\nNOME: %s", aluno[i].nome);
		printf("\nIDADE: %d", aluno[i].idade);
		printf("\nNOTA G1: %.1f", aluno[i].notag1);
		printf("\nNOTA G2: %.1f", aluno[i].notag2);
	}
	
	
}
