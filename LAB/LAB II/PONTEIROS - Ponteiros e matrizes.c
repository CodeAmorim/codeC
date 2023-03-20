#include <stdio.h>

void imprimematriz(char *matriz[3][5]){
    int linha, coluna;
    
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<5; coluna++){
            printf("%s ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

int main(){
    char matriz[3][5] = {'B','B','B','B','B',
                         'B','B','B','B','B',
                         'B','B','B','B','B'};
    int linha, coluna;
    char *p;
    
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<5; coluna++){
            printf("%c ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    p = &matriz; //O ponteiro armazena a primeira posição da matriz que é enviado para a função
    imprimematriz(*p);
    
    return 0;
}
