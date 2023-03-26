#include <stdio.h>

// função para ler os dados de cada pessoa
void lerDados(int *salario, int *numFilhos, int *pessoasAte350) {
    printf("Digite o salário: ");
    scanf("%d", salario);
    printf("Digite o número de filhos: ");
    scanf("%d", numFilhos);
    if (*salario <= 350) {
        (*pessoasAte350)++;
    }
}

// função principal
int main() {
    int salario, numFilhos, pessoasAte350 = 0;
    int somaSalario = 0, somaNumFilhos = 0;
    int maiorSalario = 0, qtdPessoas = 0;

    // leitura dos dados de cada pessoa
    printf("Digite os dados dos habitantes da cidade:\n");
    do {
        lerDados(&salario, &numFilhos, &pessoasAte350);
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        somaSalario += salario;
        somaNumFilhos += numFilhos;
        qtdPessoas++;
    } while (salario != 0);

    // cálculo das médias e percentual de pessoas com salário até R$350,00
    float mediaSalario = (float) somaSalario / (qtdPessoas - 1);
    float mediaNumFilhos = (float) somaNumFilhos / (qtdPessoas - 1);
    float percAte350 = (float) pessoasAte350 / (qtdPessoas - 1) * 100;

    // impressão dos resultados
    printf("\nRESULTADOS:\n");
    printf("Média de salário da população: %.2f\n", mediaSalario);
    printf("Média do número de filhos: %.2f\n", mediaNumFilhos);
    printf("Maior salário: %d\n", maiorSalario);
    printf("Percentual de pessoas com salário até R$350,00: %.2f%%\n", percAte350);

    return 0;
}

