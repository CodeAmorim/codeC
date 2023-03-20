int fibo(int n){
    int *q = (int*) malloc(sizeof(int)*n);
    int i = 2;
    
    *(q + 0) = 0;
    *(q + 1) = 1;
    
    for(; i<n; i++){
        *(q + i) = *(q + i - 1) + *(q + i - 2);
    }
    
    return q;
}

int main(){
    int *f, x;
    f = fibo(4);
    
    for(x=0; x<4; x++)
        printf("%d", *(f + x));
    free(f);
    
    return 0;
}
