#include <stdio.h>

int main(){
    char nome[50];
    
    printf("Digite seu nome: ");
    gets(nome); //Armazena cada caracter digitado em uma posição diferente no vetor. O restante das posição recebem NULL
    
    printf("%s\n", nome);
    
    //Atribui à segunda posição do vetor um valor nulo '\0'
    nome[2] = '\0';
    
    //Printa o que sobrou a partir da posição 2 até o fim
    printf("%s", nome + 3);
    
    return 0;
}

