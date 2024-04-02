#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 01/04/24
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor, imp;
	int estado;
	printf("Digite o valor do Produto \n");
	scanf("%f" , &valor);
	printf("[Escolha a Sigla do Estado Destino] \n\n Estados Disponíveis para entrega: \n 1- MG \n 2- SP \n 3- RJ \n 4- MS \n");
	scanf("%i" , &estado);
	
	switch (estado){
		case 1:
			imp = (valor*1.07);
			printf("O valor do Prdouto para esse Estado é: %f" , imp);
			break;
		case 2:
			imp = (valor*1.12);
			printf("O valor do Prdouto para esse Estado é: %f" , imp);
			break;
		case 3:
			imp = (valor*1.15);
			printf("O valor do Prdouto para esse Estado é: %f" , imp);
			break;
		case 4:
			imp = (valor*1.08);
			printf("O valor do Prdouto para esse Estado é: %f" , imp);
			break;
		default : printf("Opção inválidada, Escolha um Estado válido ");
	}
	return 0;
}
