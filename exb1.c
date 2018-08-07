#include <stdio.h>
#include <stdlib.h>


int main (){

	int num;

	printf("Informe um numero:\n");
	scanf("%d", &num);

	if (num %2==1 )
		printf("Este numero eh impar\n");

	else 
		printf("Este numero eh par\n");

}