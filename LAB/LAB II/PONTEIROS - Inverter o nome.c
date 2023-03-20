#include <stdio.h>

int contar(char *c){

    int cont = 0;

    while(*c != '\0'){
        cont++;
        c++;
    }
    return cont;
}

void inverter(char *c){
    int t = contar(c);
    int i = 0, j = 0;
    char aux;
    
    for(i = 0, j = t - 1; i < j; i++, j--){
        aux = *(c + i);
        *(c + i) = *(c + j);//Primeiro pega o endere�o de memoria e soma o i (primeiro caracter). E depois
        *(c + j) = aux;//vai buscar o ultimo caracter que � j
    }//() � para ordem de precedencia, para ele somar os valores antes da atribui��o
}

int main(){
    char nome[7] = "Tobias\0";
    inverter(nome);
    printf("%s", nome);

    return 0;
}
