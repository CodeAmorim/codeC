#include<stdio.h>
int perf(long int N){
	
	long int i, divs = 0;
	
	for(i=1; i<= N/2; i++){
		if(N%i == 0){
			divs = divs + i;
		}if(divs == N){
			return 1;
		}
		else return 0;
	}	
}
	
void main(){
	
	long int x = 14;
	
	if(perf(x) == 1){
		printf("%d ‚ perfeito",x);
	}else{
		printf("%d nao ‚ perfeito",x);
	}
}
