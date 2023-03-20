/*Note que uma fun��o da biblioteca string foi utilizada aqui, STRCPY. Essa fun��o copia 
um valor para uma vari�vel de cadeia de caracteres. Aqui, estou copiando o valor NULL para 
o membro nome da estrutura funcion�rio. Os outros membros voc� pode acessar normalmente e diretamente,
 usando o operador direto �ponto�.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct Funcionario{
    char nome[50];
    int idade;
    float salario;
}Funcionario;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, posicao;
	char nome;
	Funcionario func[5];

	//Inicializando o vetor da estrutura
	for(i=0; i<5; i++) {
	    strcpy(func[i].nome, "NULL");
	    func[i].idade = 0;
	    func[i].salario = 0.0;
	}
	
	//Preencher os dados
	for(i=0; i<5; i++) {
    printf(" Digite nome do funcion�rio: ");
    scanf("%s%*c", &func[i].nome);
    printf(" Digite a idade do funcion�rio: ");
    scanf("%d%*c", &func[i].idade);
    printf(" Digite o sal�rio do funcion�rio: ");
    scanf("%f%*c", &func[i].salario);
	}
	
	//Mostrar os dados na tela
	for(i=0; i<5; i++) {
    printf(" \n O nome do funcion�rio �: %s ", func[i].nome);
    printf(" \n A idade do funcion�rio �: %d ", func[i].idade);
    printf(" \n O sal�rio do funcion�rio �: %.2f ", func[i].salario);
	}
	
	return 0;
}
