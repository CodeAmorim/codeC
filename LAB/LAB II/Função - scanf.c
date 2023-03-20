#include <stdio.h>

int main()
{
    int x, y, z, r;
    
    r = scanf("%d %d %d", &x, &y, &z);
    printf("%d %d %d %d", r, x, y, z);
    // Pra que isso nos ajuda?
    // Pode ser usado para proteger o codigo das façanhas do usuario.
    // Por exemplo para o usuario colocar a idade e coloca uma letra. 
    // O sistema simplesmente ignora a letra e continua
    return 0;
}
