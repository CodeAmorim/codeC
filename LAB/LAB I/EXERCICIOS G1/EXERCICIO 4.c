#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite uma letra (min�scula) de A � D: ");
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
            printf("Letra inv�lida!");
            break;
        }
    }
    return 0;
}
