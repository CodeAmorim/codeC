#include <stdio.h>
#include <math.h>

int main()
{
    int base = 3, expoente = 0, resultado;
    
    for(expoente=0; expoente<=15; expoente++) {
        resultado = pow(base, expoente);
        printf("%d\n", resultado);
    }

    return 0;
}
