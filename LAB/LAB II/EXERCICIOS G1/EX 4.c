#include <stdio.h>

void mostrar(int *p, int t){
    int i;
    
    for(i=0; i<10; i++){
        if(i % 3 != 0){
            printf("%d ", *(p + i));
        }
    }
}

int main(){
    int vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    mostrar(vet, 10);

    return 0;
}
