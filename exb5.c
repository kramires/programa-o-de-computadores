#include <stdio.h>
#include <stdlib.h>


int main (){

	int x, y;

	printf("Digite um numero: x\n");
	scanf("%d", &x);

	printf("Digite outro numero y:\n");
	scanf("%d", &y);

	if (x>y)
		printf("O numero x eh maior que y.\n");
	else
		printf("O numero y eh maior que x.\n");
}