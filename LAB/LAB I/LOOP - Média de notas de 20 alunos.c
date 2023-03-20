#include <stdio.h>

int main()
{
    float media, nota1=0, nota2=0;
    int aluno=1;
    
    printf("MÉDIA DOS ALUNOS DA TURMA\n\n");
    
    for(aluno=1; aluno<=20;aluno++) {
        printf("\nALUNO %d\n", aluno);
        printf("Digite a primeira nota:");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        media = (nota1 + nota2) / 2;
        
       printf("Sua média é: %.1f\n", media);
        
    }
    return 0;
}
