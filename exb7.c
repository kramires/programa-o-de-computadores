/*Leia dois números inteiros e escreva uma mensagem dizendo
 se ambos forem positivos ou negativos,
 ou se tiverem sinais opostos ou se um deles for zero.*/

#include <stdio.h>
#include <stdlib.h>


int main (){

	int x, y;

	printf("Digite um numero x\n");
	scanf("%d", &x);

	printf("Digite outro numero y:\n");
	scanf("%d", &y);

	if (x>0 && y>0)
		printf("X e Y sao positivos\n");

	else if (x<0 && y<0)
		printf("X e Y sao negativos\n");

	else if (x<0 && y>0)
		printf("X e Y tem sinais opostos\n");

	
	else if (x>0 && y<0)
		printf("X e Y tem sinais opostos\n");

	else if ( x==0 || y==0 )
		printf("X ou Y eh igual zero\n");

}

