#include <stdio.h>

int aprovado(float nota) {
    if(nota >= 7) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int resultado = aprovado(7.01);
    printf("%d", resultado);
    
    return 0;
}
