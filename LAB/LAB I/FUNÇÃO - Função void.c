#include <stdio.h>

void aprovado(float nota){
    if (nota >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}


int main()
{
    aprovado(7);

    return 0;
}
