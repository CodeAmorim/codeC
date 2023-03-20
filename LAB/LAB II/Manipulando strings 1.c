#include <stdio.h>

int main(){
    int x = 0;
    
    char c[9] = "Alex\0ande";
    
    /*Enquanto o que estiver na posição c[x] for diferente de '\0',
    ele printa o que há nessa posição.
	Quando for igual ele passa para ao proximo loop e printa o restante
	do vetor de caracteres*/	
    for( ; c[x]!='\0'; x++)
        printf("%c", c[x]);
    for(x += 1; c[x] != '\0'; x++)
        printf("%c", c[x]);

    return 0;
}
