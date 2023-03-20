#include <stdio.h>

// fun��o para ler os dados de cada pessoa
void lerDados(int *salario, int *numFilhos, int *pessoasAte350) {
    printf("Digite o sal�rio: ");
    scanf("%d", salario);
    printf("Digite o n�mero de filhos: ");
    scanf("%d", numFilhos);
    if (*salario <= 350) {
        (*pessoasAte350)++;
    }
}

// fun��o principal
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

    // c�lculo das m�dias e percentual de pessoas com sal�rio at� R$350,00
    float mediaSalario = (float) somaSalario / (qtdPessoas - 1);
    float mediaNumFilhos = (float) somaNumFilhos / (qtdPessoas - 1);
    float percAte350 = (float) pessoasAte350 / (qtdPessoas - 1) * 100;

    // impress�o dos resultados
    printf("\nRESULTADOS:\n");
    printf("M�dia de sal�rio da popula��o: %.2f\n", mediaSalario);
    printf("M�dia do n�mero de filhos: %.2f\n", mediaNumFilhos);
    printf("Maior sal�rio: %d\n", maiorSalario);
    printf("Percentual de pessoas com sal�rio at� R$350,00: %.2f%%\n", percAte350);

    return 0;
}

