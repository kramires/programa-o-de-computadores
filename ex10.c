#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float r, PI = 3.14, v;

	printf("Digite o raio da esfera:\n");
	scanf ("%f", &r);

	v = (4*PI* (pow(r,3)))/3;
		printf("O volume da esfera é: %f\n", v);

}