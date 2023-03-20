#include <stdio.h>

int main()
{
    int num;
    printf("Esses são os números multiplos de 4:\n");
    for (num=4;num<200;num+=4) {
        printf("%d\n", num);
    }
  

    return 0;
}
