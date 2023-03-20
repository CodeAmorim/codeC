#include <stdio.h>
#include <stdlib.h>

int *funcao(int *p, int t){
    int *q = (int*) malloc(sizeof(int)*t);//Q é o novo vetor
    int i = 0, f = t - 1;
    
    for(; i<t; i++, f--){
        *(q + i) = *(p + f);
    }
    return q;
}

int main(){
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *inv, x;
    
    inv = funcao(v, 10);//inv recebe um endereço de memoria vindo da função
    for(x=0; x<10; x++)
        printf("%d ", *(inv + x));
        
    free(inv);
    return 0;
}
