#include <stdio.h>

// O tipo da variavel precisa ser o mesmo da função ex: INT
int soma(int valorA, int valorB) { //Essas duas variaveis não são as mesmas do MAIN. Tem mesmo nome, porém, lugares diferentes na memoria
    int resultado = valorA + valorB;//Não há necessidade que tenham os mesmos nomes do MAIN

    return resultado;
}
//Função sem retorno é void (vazio)
int main() {
    int valorA = 5;
    int valorB = 10;
    int res = soma(valorA, valorB);
    printf("%d", res);

    return 0;
}
