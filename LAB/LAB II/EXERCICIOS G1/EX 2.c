#include <stdio.h>
float maior(float *v, int t, float num){
    int c = 0, i;
    
    for(i=0; i<t; i++){
        if(*(v+i) > num){
            c++;
        }
    }
    return c;
}

int main() {
    float v[3] = {7, 8, 9.3};
    float num = 7;
    int t = 3;
    
    printf("%f", maior(v, t, num));
    return 0;
}
