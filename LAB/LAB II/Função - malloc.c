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
        // O * irá apontar para a posição de V e vai acrescentar o valor de T para ir à ultima posição com v + t
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
    // *(v + i) ou *(v + t) - Os (v + t) buscam a posição e o "*"" busca o conteudo da posição.
}

int main(){
    int *p, t, *aux, i, resultado;
    
    //Escolhe a quantidade de posições que o vetor terá
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    
    //A função 'malloc' aloca um espaço no ponteiro 'p' com o numero 't' de posições
    aux = p = (int*)malloc(t * sizeof(int) * t);
    
    //Solicitação dos números para as respectivas posições
    for(i = 0; i < t; i++, aux++){
        printf("VETOR [%d]:", i);
        scanf("%d", aux);
    }
    /*aux é um ponteiro, portanto, aux++ faz com que o ponteiro aponte para a proxima posição
	Caso aux fosse somente um vetor, não seria necessária essa atribuição
	*/
	
    mostrarPrimeiroUltimo(p, t);
    free(p);
    
    return 0;
}
