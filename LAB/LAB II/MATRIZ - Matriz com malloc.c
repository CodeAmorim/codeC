#include <stdio.h>
#include <stdlib.h>
void PreencherMatriz(int *p, int l, int c){
    int i;
    for(i=0; i<l*c; i++){
    	*(p + i) = i + 1; // *(p + i) anda pela matriz e i + 1 é o valor a ser adicionado à posição
    } // A matriz tera numeros de 1 até o numero de quantidade de posições
}

void MostrarMatriz(int *p, int l, int c){
    int i, j;
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%d ", *p++);
        }
        printf("\n");
    }
}

int getelemento(int i, int j, int *p, int l, int c){
    
    if(i,l && j<c){ // Garante que i e j estejam dentro das linhas da matriz
        return *(p + (c *i) + j);
    }
}

int main(){
    int *m, l, c, i, j, x;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);
    m = (int*)malloc(sizeof(int)*l*c); // Aloca espaço para uma matriz de inteiros
    printf("\n");
    
    PreencherMatriz(m, l, c);
    MostrarMatriz(m, l, c);
    x = getelemento(1, 2, m, l, c);

    printf("\n%d",x);
    
    free(m);

    return 0;
}
