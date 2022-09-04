#include<stdio.h>
void mostraNumero(int x){
	
	for(int i = 1; i<= x; i++){
	   	   printf("\n");
	}
	for(int i=1; i <= x; i++){
	   	   	 printf(" [%i] ",x);  	
	}
	printf("\n O numero e: %d.",x);
}
//chamada da função
main(){
	mostraNumero(5);
}

