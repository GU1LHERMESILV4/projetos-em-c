#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 06/05/24
*/

int main(){

	int ano;
	double salario; 
	float percentual = 1.5; 

	//Salario em 1995

	salario = 2000;

	for(ano = 1996; ano <= 2024; ano ++){
		salario *= 1 + (percentual / 100);
		percentual *= 2; 

		printf("Salario em %d: R$ %.2lf\n", ano, salario); 
	}

	return 0;
}

