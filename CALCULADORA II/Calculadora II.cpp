#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 22/04/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	float a, b , res;
	int opc; 
	do{	
	printf("\nEscolha a Opera��o desejada: \n\n 1- Soma \n 2- Subtra��o \n 3- Multiplica��o \n 4- Divis�o\n 5- Finalizar Programa\n ");
	scanf("%i" , &opc);
		if (opc > 0 && opc < 5 ){
			printf("\nDigite o Primeiro N�mero\n");
			scanf("%f" , &a);
			printf("\nDigite o Segundo N�mero\n");
			scanf("%f" , &b);
		}
	switch(opc){
		case 1:
			res = a+b;
			printf("\nO Resultado da Opera��o �: %.2f\n" , res);
			break;
		case 2:
			res = a-b;
			printf("\nO Resultado da Opera��o �: %.2f\n" , res);
			break;
		case 3:
			res = a*b;
			printf("\nO Resultado da Opera��o �: %.2f\n" , res);
		break;
		case 4:
			if (b==0){
			printf("O Denominador N�O Pode ser 0\n");
			}
			else{
				res = a/b;
				printf("\nO Resultado da Opera��o �: %.2f\n" , res);
			}
			break;
		case 5:
			printf("Programa Finalizado\n");
			break;
		default: printf("Op��o Inv�lida\n");
	}
	}while(opc != 5);
	
	
	system ("pause");
	return 0;
}


