#include <stdio.h>
#include <stdlib.h>


int main (){

	int x, y, z;

	printf("Digite um numero x\n");
	scanf("%d", &x);

	printf("Digite outro numero y:\n");
	scanf("%d", &y);

	printf("Digite outro numero y:\n");
	scanf("%d", &z);

	if (x>y && x>z)
		printf("X eh o maior\n");

	else if (y>x && y>z)
		printf("Y eh o maior\n");

	else if (z>x && z>y)
		printf("Z eh o maior\n");

	if (x<y && x<z)
		printf("X eh o menor\n");

	else if (y>x && y>z)
		printf("Y eh o menor\n");

	else if (z>x && z>y)
		printf("Z eh o menor\n");
}



