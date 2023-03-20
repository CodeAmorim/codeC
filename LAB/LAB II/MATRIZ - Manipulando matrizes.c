#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5]; 
    int i = 0, j = 0, n = 0;
    
    
   
    
   //Preenchimento aleatório
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
   
   //Zerando todos elementos da primeira Linha
    for(i=0; i<1; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = 0;
        }
    }
    
    printf("\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
   
   //Zerando todos elementos da primeira coluna
    for(i=0; i<5; i++){
        for(j=0; j<1; j++){
            matriz[i][j] = 0;
        }
    }
    
    printf("\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   i=0;
   j=0;
   //Mostrando a diagonal da matriz
    for(i=0; i<5; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", matriz[i][j]);
            
       }
       n++;
       printf("\n");
   }
    return 0;
}




