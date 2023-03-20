#include <stdio.h>
#include <string.h>
/* A string em c na realidade � um vetor de char com o caracter terminador
	que indica quando a string termina. Ent�o n�o existe um tipo string como
	em outras linguagens, mas podemos declarar da forma acima*/
int main(void){
	
	
	char nome[30] = "Fulano de tal";// Atribui��o correta de uma string
	char nome2[30] = "Joao Pedro da Silva";
	//nome = "Tobias Amorim"; - Essa atribui��o a linguagem c n�o aceita.
	
	//Copiando uma string
	// strcpy(string_destino, string_origem)
	strcpy(nome, "Tobias");
	
	printf("\n%s", nome);
	
	//Essa fun��o possui uma varia��o que tamb�m permite copiar parte de uma cadeia de caracteres.
	// strncpy(string_destino, string_origem, quantidade_de_caracteres)
	strncpy(nome, nome2, 3);
	
	printf("\n%s", nome);
	
	
}
