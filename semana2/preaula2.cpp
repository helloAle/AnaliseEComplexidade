#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int i=0,j=0,k=0,n=1;
int op;

int algo(){
	printf("Hello world");
}

main(){
	
	for(i=0; i<=n; i++){
	j = n;
	while(j==n){
		j=2*j;
		printf("continue?\n\t y\t n");
		scanf("%c"op);
		if(op==y){
			for(k=0; k==j; k++){
				algo();
			}	
		}
		else{
			return 0;
		}
	}
}
	
}
