#include <stdio.h>
#include <stdlib.h>

void mostrar(int *v, int t){
    while(t-- > 0){
        printf("%d", *v++);
    }
}

void mostrarinvertido(int *v, int t){
    while(t-- > 0){
        
        printf("%d", *(v + t));
        // O * ir� apontar para a posi��o de V e vai acrescentar o valor de T para ir � ultima posi��o com v + t
    }
}


void mostrarPrimeiroUltimo(int *v, int t){
    int i = 0;
    int aux = t;
    while(t-- > 0){
        printf("%d", *(v + i));
        printf("%d\n", *(v + t));
        i++;
    }
    // *(v + i) ou *(v + t) - Os (v + t) buscam a posi��o e o "*"" busca o conteudo da posi��o.
}

int main(){
    int *p, t, *aux, i, resultado;
    
    //Escolhe a quantidade de posi��es que o vetor ter�
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    
    //A fun��o 'malloc' aloca um espa�o no ponteiro 'p' com o numero 't' de posi��es
    aux = p = (int*)malloc(t * sizeof(int) * t);
    
    //Solicita��o dos n�meros para as respectivas posi��es
    for(i = 0; i < t; i++, aux++){
        printf("VETOR [%d]:", i);
        scanf("%d", aux);
    }
    /*aux � um ponteiro, portanto, aux++ faz com que o ponteiro aponte para a proxima posi��o
	Caso aux fosse somente um vetor, n�o seria necess�ria essa atribui��o
	*/
	
    mostrarPrimeiroUltimo(p, t);
    free(p);
    
    return 0;
}
