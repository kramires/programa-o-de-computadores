#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
	int num1, num2, resultado1, resultado2;

	printf("Digite um numero:\n");
	scanf("%d", &num1);

	printf("Digite outro numero:\n");
	scanf("%d", &num2);

	resultado1 = pow (num1,2);
	resultado2 = pow (num2,2);

	printf("O resultado do %d e de %d ao quadrado eh: %d e %d \n", num1, num2, resultado1, resultado2);

	 
}