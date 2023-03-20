#include <stdio.h>

int funcaosomaemultiplica(int a, int b, int *mult){
    *mult = a * b;
    
    return a + b;
}

int main(){
    int x=3, y=5, r, soma;
    
    soma = funcaosomaemultiplica(x, y, &r);
    printf("%d %d", soma, r);
    
    return 0;
}
