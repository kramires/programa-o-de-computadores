#include <stdio.h>
#include <stdlib.h>


int main (){

	int x, y;

	printf("Digite um numero\n");
	scanf("%d", &x);

	printf("Digite outro numero\n");
	scanf("%d", &y);

	if (x==y)
		printf("Os numeros sao iguais\n");
	else
		printf("Os numeros sao diferentes\n");
}