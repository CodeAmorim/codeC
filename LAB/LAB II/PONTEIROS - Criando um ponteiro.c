#include <stdio.h>

int main(){
    int x = 3;
    int *p;
    p = &x;
    *p = 5;
    printf("%d %d %d %d", x, *p, &x, &p);

    return 0;
}

