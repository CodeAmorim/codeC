#include <stdio.h>

long int multiplicatorio(int i, int n);

int main() {
    int i, n;
    printf("Digite os valores de i e n: ");
    scanf("%d %d", &i, &n);
    printf("O multiplicatorio de %d a %d eh: %ld\n", i, n, multiplicatorio(i, n));
    return 0;
}

long int multiplicatorio(int i, int n) {
    long int result = 1;
    int j;
    for (j = i; j <= n; j++) {
        result *= j;
    }
    return result;
}

