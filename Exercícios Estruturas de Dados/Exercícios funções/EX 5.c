#include <stdio.h>

float media_notas(float nota1, float nota2, float nota3, char letra) {
    float media = 0;
    if (letra == 'A') {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (letra == 'P') {
        media = (5*nota1 + 3*nota2 + 2*nota3) / (5+3+2);
    } else if (letra == 'H') {
        media = 3 / ((1/nota1) + (1/nota2) + (1/nota3));
    } else {
        printf("Letra invalida!\n");
    }

    return media;
}

int main() {
    float nota1, nota2, nota3;
    char letra;

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite a letra para calcular a media das notas (A, P ou H): ");
    scanf(" %c", &letra);

    float media = media_notas(nota1, nota2, nota3, letra);

    if (letra == 'A') {
        printf("A media aritmetica das notas e: %.2f\n", media);
    } else if (letra == 'P') {
        printf("A media ponderada das notas e: %.2f\n", media);
    } else if (letra == 'H') {
        printf("A media harmonica das notas e: %.2f\n", media);
    }

    return 0;
}

