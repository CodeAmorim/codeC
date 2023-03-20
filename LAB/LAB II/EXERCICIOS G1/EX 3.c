#include <stdio.h>
#include <stdlib.h>

int *alocar(){
    int *q = (int *)malloc(sizeof(int)*10); // Cria um vetor de 10 inteiros
    int i;
    
    for(i=0; i<10; i++){
        *(q + i) = (i + 1) * 5;
    }
    return q;
}

int main(){
    int *p, i;
    
    p = alocar();
    
    for(i=0; i<10; i++){
        printf("%d ", *(p+i));
    }
    
    free(p);//Libera a variavel

    return 0;
}
