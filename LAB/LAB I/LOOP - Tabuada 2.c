#include <stdio.h>

//CALCULADORA PARA TABUADA UTILIZANDO 3 ESTRUTURAS DE REPETIÇÃO:

int main(){
    int num;
    int i = 1;
    
    printf("TABUADA:\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    //WHILE:
    while(i < 11){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    
    //DO WHILE
    i = 1;
    do{
       printf("%d x %d = %d\n", num, i, num * i);
       i++;
    }while(i < 11);
    
    //FOR LOOP
    i = 1;
    for(i = 1; i < 11; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

