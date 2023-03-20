#include <stdio.h>

int contar(char *c){
    // No c, todo vetor é passado por ponteiro e todo ponteiro armazena um endereço de memoria;
    int cont = 0;

    while(*c != '\0'){
        cont++;
        c++;// É possivel pela logica que incremente o c, pois ele passa um endereço de memoria
        //Dessa forma ele pega o S e incrementa, pegando a proxima posição até encontrar o \0
    }
    return cont;
}

int main()
{
    char nome[7] = "Samuel\0";
    int x = contar(nome);
    printf("%d", x);

    return 0;
}
