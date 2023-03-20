#include <stdio.h>

int main() {
    int num;
    int contador = 0;
    
    //O teste iniciará no -1 e somente irá parar quando o usuário digitar ZERO, ZERO é falso então ele para
    for(num = -1; num !=0 ; ) {   // "!=" significa DIFERENTE DE
        printf("Digite um número: ");
        scanf("%d", &num); //O dado fornecido pelo usuário determina a modificação da variável
        
        if(num == 10) { //contador vale ZERO. Então cada vez que o usuário digitar 10 ele soma 1 para o contador
            contador = contador + 1;  //Se num é igual a 10 então some +1 para o contador
        }
    }
    printf("\nInseriu o 10: %d vezes", contador); //No final ele apresenta quantas vezes o usuario digitou 10
    
    return 0 ;
}
