#include<stdio.h>
#include<locale.h>

typedef struct CADASTRO{
	char nome[50];
	int matricula;
	float notaG1;
	float notaG2;
}CADASTRO;

//Fun��o para preencher os dados do aluno
struct CADASTRO PreencherINFO(CADASTRO alCAD){
	printf("\n");
	printf("Digite o nome do Aluno: ");
	fflush(stdin);
	gets(alCAD.nome);
	fflush(stdin);
	printf("Digite a matricula do Aluno: ");
	scanf("%d" ,&alCAD.matricula);
	printf("Digite a nota da G1: ");
	scanf("%f", &alCAD.notaG1);
	fflush(stdin);
	printf("Digite a nota da G2: ");
	scanf("%f", &alCAD.notaG2);
	return alCAD;
}
//Fun��o para mostrar os dados cadastrados
void mostrarINFO(CADASTRO print){
	printf("\n");
	printf("\nAluno: %s", print.nome);
	printf("\nMatricula: %d",print.matricula);
	printf("\nNota G1: %.1f",print.notaG1);
	printf("\nNota G2: %.1f",print.notaG2);
}
//Fun��o que calcula a m�dia das notas
float CalculoMedia(CADASTRO media){
	float res = (media.notaG1 + media.notaG2) / 2;
	return res;	
}
//Situ��o de aprova��o do aluno
void SituacaoAluno(float SIT){
	printf("\n");
	if (SIT >= 7){
		printf("Aluno aprovado!\n");
	}else
		printf("Aluno reprovado!\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

int main (){
	setlocale(LC_ALL, "Portuguese");
	int menu;
	float media;
	
	do{
		CADASTRO aluno;
		
		printf("\n");
		printf("*****************************");
		printf("\n***** SISTEMA DE ALUNOS *****\n");
		printf("*****************************\n");
		printf("\n");
		printf("MENU:");
		printf("\n1 - Preencher dados do aluno");
		printf("\n2 - Mostrar as informa��es do aluno");
		printf("\n3 - Mostrar a m�dia das notas do aluno");
		printf("\n4 - Mostrar a situa��o de aprova��o do aluno");
		printf("\n0 - Sair do sistema");
		printf("\nDigite a op��o desejada: ");
		scanf("%d",&menu);
		
		switch(menu){
			case 0 : {
				printf("\nSAINDO DO SISTEMA...");
				break;
			}
			case 1 : {
				CADASTRO aluno = PreencherINFO(aluno);
				/*N�o consegui armazenar os dados com uma fun��o void. 
				Precisei criar uma fun��o STRUCT para isso. N�o entendo a rela��o
				entre o struct e uma fun��o normal como void.
				N�o sei se deveria ser feito assim, mas foi o unico jeito que consegui fazer. */
				break;
			}
			case 2 : {
				mostrarINFO(aluno);
				break;
			}
			case 3 : {
				media = CalculoMedia(aluno);
				printf("\nM�dia do aluno(a) %s: %.1f\n", aluno.nome, media);
				break;
			}
			case 4 : {
				media = CalculoMedia(aluno);
				SituacaoAluno(media);
				break;
			}
			default : {
				printf("\nN�MERO DIGITADO INV�LIDO!");
				printf("\n");
				printf("\nRetornando ao sistema...");
				break;
			}	
		}
		printf("\n==================================================================");
		printf("\n");
	}while(menu !=0);
	
	return 0;
}
