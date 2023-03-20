#include <stdio.h>
#include <stdlib.h>

void uniaofotos(char foto1[3][5], char foto2[6][21]){
    int i, j;
    
    for(i=0;i<6;i++) {
        for(j=0;j<3;j++) {
           foto2[i][j] = foto1[i][j];
       }
   }
   i = 0;
   j = 0;
   
   for(i=0;i<6;i++) {
        for(j=0;j<21;j++) {
           printf("%c ", foto2[i][j]);
       }
       printf("\n");
   }
   
}

int main(){
    char foto1[3][5] = {'B', 'B', 'B', 
                        'B', 'B', 'B', 
                        'B', 'B', 'B', 
                        'B', 'B', 'B', 
                        'B', 'B', 'B'};
    char foto2[6][21] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
                         'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
                         'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
                         'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
                         'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
                         'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',};
    int i, j;
   
   uniaofotos(foto1, foto2);
   
    return 0;
}
