#include <stdio.h>

// O tipo da variavel precisa ser o mesmo da fun��o ex: INT
int soma(int valorA, int valorB) { //Essas duas variaveis n�o s�o as mesmas do MAIN. Tem mesmo nome, por�m, lugares diferentes na memoria
    int resultado = valorA + valorB;//N�o h� necessidade que tenham os mesmos nomes do MAIN

    return resultado;
}
//Fun��o sem retorno � void (vazio)
int main() {
    int valorA = 5;
    int valorB = 10;
    int res = soma(valorA, valorB);
    printf("%d", res);

    return 0;
}
