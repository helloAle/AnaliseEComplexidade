#include<stdio.h>
void mostraNumero(int x){
	
	for(int i=1; i <= x; i++){
	   printf("\n [%i] ",i);	
	}
	printf("\n O n�mero �: %d.",x);
}
//chamada da fun��o
main(){
	mostraNumero(10000);
}






