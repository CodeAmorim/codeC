#include <stdio.h>
#include <ctype.h>

int eh_minuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int eh_maiuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

char minuscula(char c) {
    if (eh_maiuscula(c)) {
        return tolower(c);
    } else {
        return c;
    }
}

char maiuscula(char c) {
    if (eh_minuscula(c)) {
        return toupper(c);
    } else {
        return c;
    }
}

int main() {
    char c;
    
    printf("Digite um caractere: ");
    scanf("%c", &c);
    
    if (eh_minuscula(c)) {
        printf("%c eh uma letra minuscula.\n", c);
        printf("Convertendo %c para maiuscula: %c\n", c, maiuscula(c));
    } else if (eh_maiuscula(c)) {
        printf("%c eh uma letra maiuscula.\n", c);
        printf("Convertendo %c para minuscula: %c\n", c, minuscula(c));
    } else {
        printf("%c nao eh uma letra.\n", c);
    }
    
    return 0;
}

