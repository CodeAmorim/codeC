#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias) {
    int totalDias = anos * 365 + meses * 30 + dias;
    return totalDias;
}

int main() {
    int anos, meses, dias;

    printf("Digite a idade da pessoa em anos, meses e dias, separados por espaco: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int idadeDias = idadeEmDias(anos, meses, dias);

    printf("A idade da pessoa em dias e: %d\n", idadeDias);

    return 0;
}

