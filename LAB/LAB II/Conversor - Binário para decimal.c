#include <stdio.h>
#include <locale.h>
int pow2(int x){
    int r = 1;
    if(x == 0)
        return 1;
    if(x == 1)
        return 2;
    for(; x > 0; x--)
        r = r *2;
        return r;
}

int bintodec(char c[32]){
    
    int r = 0;
    int i = 0, j = contar(c) - 1;
    int t = contar(c);
    
    for(; i < t; i++, j--)
        if( c[i] == '1')
            r = r + pow2(j);
    
    return r;
}

int contar(char x[32]){
    int r = 0;
    int i = 0;
    
    //&& qualquer um que for falso ele retorna r direto;
    
    while(x[r] != '\0' && i < 32)
        r++;
    
    return r;
}

int main(){
    int dec;
    char c[32];
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o número binário: ");
    gets(c);
    
    printf("O numero binário tem %d digitos\n", contar(c));
    
    dec = bintodec(c);
    printf("%s = %d", c, dec);
    return 0;
}
