#include<stdio.h>
#include<stdlib.h>

int main(){
	int indice = 13, soma = 0, k = 0, i = 0;
	
	for (i = 0; k < indice; i++){
		k = k+1;					//Loop para realizar o c�lculo solicitado.//
		soma = soma + k;
	}
	printf("%d\n",soma);
	return 0;
}
