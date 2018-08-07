/*Uma empresa decide dar aumento de 30% aos funcionários cujo 
salário é inferior a R$ 950,00. Leia o salário de um funcionário
 e verifique se ele deve ou não receber o aumento, caso deva, 
 calcule e mostre o novo salário.*/

#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float salario, aumento, novo;

	printf ("Digite o salario do funcionario\n");
	scanf("%f", &salario);
	
	aumento = salario* 0.30;

	if (salario < 950.00){

	novo = salario + aumento;
	printf("O novo sário eh %.2f\n", novo);

	}
	else 
	printf ("O salario nao aumenta\n");

}