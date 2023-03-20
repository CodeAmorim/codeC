#include <stdio.h>
/*Função que conta o número de palavras na frase, utilizando como
parametro a existencia de uma posição vazia, ou seja, uma separação feita 
com o espaço no teclado no momento da digitação*/
int contarpalavras(char frase[2000]){
    int i = 0;
    int palavras = 0;
    
    /*Enquanto a posição em 'i' tiver um caracter ou espaço, ele entra na condição.
    */
    while(frase[i] != '\0'){
        if((frase[i] == ' ' || frase[i] == '\0')&& frase[i + 1] != ' ')
            palavras = palavras + 1;
        i++;
    }
    return palavras + 1;
}

int contarletras(char x[2000]){
    int r = 0;
    int i = 0;
    
    //&& qualquer um que for falso ele retorna r direto;
    
    while(x[r] != '\0' && i < 2000)
        r++;
    
    return r;
}

int palindroma(char frase[2000]){
    int i = 0, j = contarletras(frase) - 1;
    int t = j;
    for(; i < t; i++, j--){
        if(frase[i] != frase[j])
        printf("Não é um palindromo");
        return;
    }
    printf("É um palindromo");
    return;
    
}

int main() {
    char frase[2000];
    
    printf("Digite uma frase\n");
    gets(frase);
    
    printf("A frase tem %d palavras\n", contarpalavras(frase));
    
    palindroma(frase);
    return 0;
}
