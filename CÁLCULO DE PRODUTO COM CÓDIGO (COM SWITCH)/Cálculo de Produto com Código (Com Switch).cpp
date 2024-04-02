#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 01/04/24
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cod, quant;
	float total;
	printf("Insira o código do Produto \n");
	scanf("%i" , &cod);
	printf("Insira a quantidade do Produto \n");
	scanf("%i" , &quant);
	
	switch (cod){
		case 100: total = quant*1.20; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 101: total = quant*1.30; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 102: total = quant*1.50; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 103: total = quant*1.20; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 104: total = quant*1.70; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 105: total = quant*2.20; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		case 106: total = quant*1.00; 
			printf("O valor total é: R$%2.f \n" , total);
			break;
		default : printf("Este código de Produto não é válido \n");
	}
	system("pause");
	return 0;
}
