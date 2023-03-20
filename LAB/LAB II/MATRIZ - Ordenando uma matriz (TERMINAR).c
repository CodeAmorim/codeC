#include <stdio.h>
#include <stdlib.h>

int LeInt(){
    int x;
    while(scanf("%d", &x)!=1){
        printf("Digite um número inteiro");
    }
    return x;
}

int LeIntMaiorQueZero(){
    int x = LeInt(); // O resultado de LeInt será armazenado em x
    while(x<1){
        printf("O número precisa ser maior que zero!");
        x = LeInt(); // Chama a função LeInt que contém o Scanf. Digitado um numero inteiro ele testa se x < 1
    }
    return x;
}


void MostrarMatriz(int *aux, int l, int c){ // Recebe um *aux que aponta para o inicio da matriz. Mais o número de linhas e colunas
    int i, j;
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%d ", *aux++); // *aux++ incrementa o ponteiro para que aponte para a proxima posição da matriz
        }                           // Nesse caso não basta somente incrementar i e j, pois aux sempre aponta para a mesma posição
        printf("\n");
    }
}

int *MenorElemento(int *p, int tam){ // A função deve retornar um ponteiro, por isso ela é um ponteiro
    int *aux, i;
    aux = p;  // aux aponta para a primeira posição da matriz
    
    for(i=0; i<tam; i++){
        if(*(aux) > *(p)){  // Se o conteudo da primeira posição é menor que o conteudo da matriz naquela posição,
            aux = p;        // aux aponta para a posição desse valor
        }
        p++; // Incrementa a posição da matriz para comparar com o aux, o qual aponta para o primeiro valor ou o menor valor
    }
    return aux; // Retorna aux apontando para o menor valor da matriz
}

void TrocarValores(int *a, int *b){
    int aux;
    
    aux = *a;
    *a = *b;
    *b = aux;
    
}

void TrocarElemento(int *matriz, int aux, int tam){ //Troca o valor da primeira posição da matriz pelo seu menor valor
    int i, *p;
    
    for(i=0; i<tam; i++){
        if(i < 1){
            *(matriz) = aux; // É igual à "O conteudo da posição 0 da matriz recebe o valor que aux carrega, ou seja, o menor valor da matriz"
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
    printf("Perfeito!\nNossa matriz tem %d elementos, vamos preenchê-los: \n", linhas*colunas);
    inicio = (int *)malloc(linhas*colunas*sizeof(int)); // Aloca espaço para uma matriz ex: 2 x 2 = 4
    aux = inicio;
    
    //Loop que preenche a matriz:
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Matriz[%d][%d]=",i ,j);
            *aux=LeInt(); // Verificação e atribuição do valor que ira para a posição onde *aux aponta.
            aux++; // Incrementa a posição para onde o aux aponta
        }
    }
    tam = linhas * colunas;
    
    MostrarMatriz(inicio, linhas, colunas);
    aux = MenorElemento(inicio, tam); // aux aponta para o menor valor da matriz, que é o resultado da função MenorElemento
    printf("O menor elemento é: %d", *(aux)); // *(aux) é igual à "o conteúdo para onde aux aponta"
    printf("\n");
    
    TrocarValores(&a, &b); // TERMINARRRRR
    

    TrocarElemento(inicio, *aux, tam); // Envia a matriz(inicio), *aux(aponta para o menor valor) e o tamanho da matriz
    printf("\n");
    MostrarMatriz(inicio, linhas, colunas);
    TrocarElemento(inicio, *aux, tam);
    MostrarMatriz(inicio, linhas, colunas);
    
    return 0;
}


