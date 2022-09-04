#include<stdio.h>
void mostraNumero(int x){
	
	for(int i=1; i <= x; i++){
	   printf("\n [%i] ",i);	
	}
	printf("\n O número é: %d.",x);
}
//chamada da função
main(){
	mostraNumero(10000);
}






