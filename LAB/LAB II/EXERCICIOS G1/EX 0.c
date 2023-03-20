#include <stdio.h>

void Troca(int * n, int * m) {
    int aux;
    aux = *m;
    *m = *n;
    *n = aux;
}

int main( ) {
    int x=3, y=5;
 
    Troca(&x, &y);
    printf("%d %d", x, y);
    
    return 0;
}
