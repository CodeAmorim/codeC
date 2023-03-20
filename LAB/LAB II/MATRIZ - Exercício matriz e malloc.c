#include <stdio.h>
#include <stdlib.h>
void Preencher(int *p, int l, int c){
    int i, j;
    
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++){
            printf("Digite um valor para matriz [%d][%d]", i, j);
            scanf("%d", p++);
        }
}

void Mostrar(int *p, int l, int c){
    int i, j;
    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++){
            printf("%d \t", *p++);
        }
        printf("\n");
}

int main(){
    int *matriz, linhas, colunas;
    
    printf("Digite linhas: ");
    scanf("%d", &linhas);
    printf("Digite colunas: ");
    scanf("%d", &colunas);
    
    matriz = (int *)malloc(linhas*colunas*sizeof(int));
    
    
    Preencher(matriz, linhas, colunas);
    Mostrar(matriz, linhas, colunas);
    free(matriz);
    
    return 0;
}
