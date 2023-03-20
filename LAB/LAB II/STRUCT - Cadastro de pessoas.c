
#include <stdio.h>
    struct dtnasc {
        int dia;
        int mes;
        int ano;
    };
    
    /*typedef funciona como um atalho para struct. Desta forma, toda vez
	que você colocar o nome da struct, ele reconhece o tipo como struct. Se fazendo
	desnecessária a declaração do tipo toda vez que for usá-la*/
    typedef struct Pessoa {
        char nome[50];
        long int cpf;
        float altura;
        float peso;
        struct dtnasc nasc;
    }Pessoa;//É necessário colocar o nome da struct aqui
    
float imc(float altura, float peso){
    float imc = peso / (altura * altura);
    
    return imc;
}

void MaisVelho (struct Pessoa p1, struct Pessoa p2){
    int diferenca = p1.nasc.ano - p2.nasc.ano;
    if(diferenca < 0){
        printf("A pessoa mais velha e o(a) %s", p1.nome);
    }else{
        printf("A pessoa mais velha e o(a) %s", p2.nome);
    }
}
    
int main(){

    Pessoa p1;
    Pessoa p2;
    int ch;
    
    printf("PESSOA 1");
    printf("\nDigite o nome: ");
    gets(p1.nome);
    fflush(stdin);
    
    printf("Digite o CPF: ");
    scanf("%ld", &p1.cpf);

    printf("Digite a altura:");
    scanf("%f", &p1.altura);

    printf("Digite o peso:");
    scanf("%f", &p1.peso);
    
    printf("DIGITE A DATA DE NASCIMENTO:");
    printf("\nDia: ");
    scanf("%d", &p1.nasc.dia);
    printf("Mes: ");
    scanf("%d", &p1.nasc.mes);
    printf("Ano: ");
    scanf("%d", &p1.nasc.ano);
    
//=============================================================================================================
    
    printf("\nPESSOA 2");
    printf("\nDigite o nome: ");
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' );
    gets(p2.nome);
    
    printf("Digite o CPF: ");
    scanf("%ld", &p2.cpf);

    printf("Digite a altura:");
    scanf("%f", &p2.altura);

    printf("Digite o peso:");
    scanf("%f", &p2.peso);
    
    printf("DIGITE A DATA DE NASCIMENTO:");
    printf("\nDia: ");
    scanf("%d", &p2.nasc.dia);
    printf("Mes: ");
    scanf("%d", &p2.nasc.mes);
    printf("Ano: ");
    scanf("%d", &p2.nasc.ano);
    
    printf("\nDADOS PESSOA 1:");
    printf("\nNome: %s", p1.nome);
    printf("\nCPF: %ld", p1.cpf);
    printf("\nAltura: %.1f", p1.altura);
    printf("\nPeso: %.1f", p1.peso);
    printf("\nNascimento: %d / %d / %d", p1.nasc.dia, p1.nasc.mes, p1.nasc.ano);
    printf("\nIMC PESSOA 1: %1.f", imc(p1.altura, p1.peso));
    printf("\n");
    printf("\nDADOS PESSOA 2:");
    printf("\nNome: %s", p2.nome);
    printf("\nCPF: %ld", p2.cpf);
    printf("\nAltura: %.1f", p2.altura);
    printf("\nPeso: %.1f", p2.peso);
    printf("\nNascimento: %d / %d / %d", p2.nasc.dia, p2.nasc.mes, p2.nasc.ano);
    printf("\nIMC PESSOA 1: %1.f", imc(p2.altura, p2.peso));
    
    printf("\n");
    MaisVelho(p1, p2);
    
    return 0;
}

