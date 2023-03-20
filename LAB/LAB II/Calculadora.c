#include <stdio.h>
#include <locale.h>

int main(){
    int escolha;
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");
    
    do{
    	printf("\n");
	    printf("=======================\n");
	    printf("===== CALCULADORA =====\n");
	    printf("=======================\n\n");
	    
	    printf("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
	    printf("Escolha a operação: ");
	    scanf("%d", &escolha);
    
	    switch(escolha) {
	        case 1: {
	            printf("\nAdição\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n1);
	            printf("Digite o segundo numero: ");
	            scanf("%d", &n2);
	            printf("%d + %d = %d", n1, n2, n1 + n2);
	            break;
	        }
	        case 2: {
	            printf("\nSubtração\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n1);
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n2);
	            printf("%d - %d = %d", n1, n2, n1 - n2);
	            break;
	        }
	        case 3: {
	            printf("\nMultiplicação\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n1);
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n2);
	            printf("%d * %d = %d", n1, n2, n1 * n2);
	            break;
	        }
	        case 4: {
	            printf("\nDivisão\n");
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n1);
	            printf("Digite o primeiro numero: ");
	            scanf("%d", &n2);
	            printf("%d / %d = %d", n1, n2, n1 / n2);
	            break;
	        }
	        default: {
	            printf("\nEncerrando programa...");
	        }
	    }
	    printf("\n");
	}while(escolha!=0);
    return 0;
}

