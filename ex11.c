#include <stdio.h>
#include <stdlib.h>


int main (){
	float b, h, A;

	printf("Digite a base do triangulo:\n");
	scanf ("%f", &b);

	printf("Digite a altura do triangulo:\n");
	scanf ("%f", &h);

	A = (b*h)/2;
	printf("A area do triangulo eh: %.2f\n", A);
}