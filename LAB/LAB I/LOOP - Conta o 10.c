#include <stdio.h>

int main() {
    int num;
    int contador = 0;
    
    //O teste iniciar� no -1 e somente ir� parar quando o usu�rio digitar ZERO, ZERO � falso ent�o ele para
    for(num = -1; num !=0 ; ) {   // "!=" significa DIFERENTE DE
        printf("Digite um n�mero: ");
        scanf("%d", &num); //O dado fornecido pelo usu�rio determina a modifica��o da vari�vel
        
        if(num == 10) { //contador vale ZERO. Ent�o cada vez que o usu�rio digitar 10 ele soma 1 para o contador
            contador = contador + 1;  //Se num � igual a 10 ent�o some +1 para o contador
        }
    }
    printf("\nInseriu o 10: %d vezes", contador); //No final ele apresenta quantas vezes o usuario digitou 10
    
    return 0 ;
}
