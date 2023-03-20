#include <stdio.h>

int main()
{
    int num, contador;
    
    printf("TABUADA\n\n");
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &num);
    
    for(contador=0;contador<11;contador++) {
        printf("%d x %d = %d\n", num, contador, num * contador);
        
     
    }

    return 0;
}
