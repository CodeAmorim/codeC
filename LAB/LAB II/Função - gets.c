#include <stdio.h>

int main(){
    char nome[50];
    
    printf("Digite seu nome: ");
    gets(nome); //Armazena cada caracter digitado em uma posi��o diferente no vetor. O restante das posi��o recebem NULL
    
    printf("%s\n", nome);
    
    //Atribui � segunda posi��o do vetor um valor nulo '\0'
    nome[2] = '\0';
    
    //Printa o que sobrou a partir da posi��o 2 at� o fim
    printf("%s", nome + 3);
    
    return 0;
}

