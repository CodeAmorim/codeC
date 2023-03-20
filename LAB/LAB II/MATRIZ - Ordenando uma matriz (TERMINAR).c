#include <stdio.h>
#include <stdlib.h>

int LeInt(){
    int x;
    while(scanf("%d", &x)!=1){
        printf("Digite um n�mero inteiro");
    }
    return x;
}

int LeIntMaiorQueZero(){
    int x = LeInt(); // O resultado de LeInt ser� armazenado em x
    while(x<1){
        printf("O n�mero precisa ser maior que zero!");
        x = LeInt(); // Chama a fun��o LeInt que cont�m o Scanf. Digitado um numero inteiro ele testa se x < 1
    }
    return x;
}


void MostrarMatriz(int *aux, int l, int c){ // Recebe um *aux que aponta para o inicio da matriz. Mais o n�mero de linhas e colunas
    int i, j;
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%d ", *aux++); // *aux++ incrementa o ponteiro para que aponte para a proxima posi��o da matriz
        }                           // Nesse caso n�o basta somente incrementar i e j, pois aux sempre aponta para a mesma posi��o
        printf("\n");
    }
}

int *MenorElemento(int *p, int tam){ // A fun��o deve retornar um ponteiro, por isso ela � um ponteiro
    int *aux, i;
    aux = p;  // aux aponta para a primeira posi��o da matriz
    
    for(i=0; i<tam; i++){
        if(*(aux) > *(p)){  // Se o conteudo da primeira posi��o � menor que o conteudo da matriz naquela posi��o,
            aux = p;        // aux aponta para a posi��o desse valor
        }
        p++; // Incrementa a posi��o da matriz para comparar com o aux, o qual aponta para o primeiro valor ou o menor valor
    }
    return aux; // Retorna aux apontando para o menor valor da matriz
}

void TrocarValores(int *a, int *b){
    int aux;
    
    aux = *a;
    *a = *b;
    *b = aux;
    
}

void TrocarElemento(int *matriz, int aux, int tam){ //Troca o valor da primeira posi��o da matriz pelo seu menor valor
    int i, *p;
    
    for(i=0; i<tam; i++){
        if(i < 1){
            *(matriz) = aux; // � igual � "O conteudo da posi��o 0 da matriz recebe o valor que aux carrega, ou seja, o menor valor da matriz"
        }
        if(i < 2){
            *p = *matriz;
            MenorElemento(p, tam);
        }
    }
}

int main(){
    int linhas, colunas, *inicio, *aux, i, j, tam, *p;
    int a = 5, b = 7, valor;
    
    printf("Digite a quantidade de linhas de sua matriz: ");
    linhas = LeIntMaiorQueZero();
    printf("Agora digite a quantidade de colunas: ");
    colunas = LeIntMaiorQueZero();
    printf("Perfeito!\nNossa matriz tem %d elementos, vamos preench�-los: \n", linhas*colunas);
    inicio = (int *)malloc(linhas*colunas*sizeof(int)); // Aloca espa�o para uma matriz ex: 2 x 2 = 4
    aux = inicio;
    
    //Loop que preenche a matriz:
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Matriz[%d][%d]=",i ,j);
            *aux=LeInt(); // Verifica��o e atribui��o do valor que ira para a posi��o onde *aux aponta.
            aux++; // Incrementa a posi��o para onde o aux aponta
        }
    }
    tam = linhas * colunas;
    
    MostrarMatriz(inicio, linhas, colunas);
    aux = MenorElemento(inicio, tam); // aux aponta para o menor valor da matriz, que � o resultado da fun��o MenorElemento
    printf("O menor elemento �: %d", *(aux)); // *(aux) � igual � "o conte�do para onde aux aponta"
    printf("\n");
    
    TrocarValores(&a, &b); // TERMINARRRRR
    

    TrocarElemento(inicio, *aux, tam); // Envia a matriz(inicio), *aux(aponta para o menor valor) e o tamanho da matriz
    printf("\n");
    MostrarMatriz(inicio, linhas, colunas);
    TrocarElemento(inicio, *aux, tam);
    MostrarMatriz(inicio, linhas, colunas);
    
    return 0;
}


