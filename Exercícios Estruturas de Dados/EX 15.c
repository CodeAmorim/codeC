#include <stdio.h>

long int somatorio(int i, int n) {
    int j;
    long int soma = 0;
    for (j = i; j <= n; j++) {
        soma += j;
    }
    return soma;
}

int main(){
	
	int i, n;
	printf("Digite dois numeros: ");
	scanf("%d %d", &i, &n);
	
	printf("Soma = %d", somatorio(i, n));
	
	return 0;
}
