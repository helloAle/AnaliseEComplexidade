#include<stdlib.h>
#include<stdio.h>
int n=0,i=0,j=0,k=0;

void teste(){
	for(i=0; i<=n; i++){
		printf("\n ciclo %i",i);
		j=1;
		while(j<n){
			j=2*j;
			for(k=0; k<=j; k++){
			}
		}
	}
}

main(){
	printf("Defina o valor de n por favor: ");
	scanf("%i",&n);
	teste();
}
