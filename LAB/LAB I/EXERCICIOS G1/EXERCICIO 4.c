#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite uma letra (minúscula) de A à D: ");
    scanf("%c", &letra);
    
    switch(letra) {
        case 'a' : {
            printf("INSERIR");
            break;
        }
        case 'b' : {
            printf("PROCURAR");
            break;
        }
        case 'c' : {
            printf("REMOVER");
            break;
        }
        case 'd' : {
            printf("SAIR");
            break;
        }
        default : {
            printf("Letra inválida!");
            break;
        }
    }
    return 0;
}
