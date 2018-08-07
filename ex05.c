#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int num1, num2, resultado1, resultado2, soma;

	printf("Digite um numero:\n");
	scanf("%d", &num1);

	printf("Digite outro numero:\n");
	scanf("%d", &num2);

	resultado1 = pow (num1,2);
	resultado2 = pow (num2,2);

	soma = resultado1 + resultado2;

	printf("O resultado da soma dos quadrados dos numeros %d e de %d eh: %d \n", num1, num2, soma);


}