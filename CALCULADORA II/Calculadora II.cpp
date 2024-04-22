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
	printf("\nEscolha a Operação desejada: \n\n 1- Soma \n 2- Subtração \n 3- Multiplicação \n 4- Divisão\n 5- Finalizar Programa\n ");
	scanf("%i" , &opc);
		if (opc > 0 && opc < 5 ){
			printf("\nDigite o Primeiro Número\n");
			scanf("%f" , &a);
			printf("\nDigite o Segundo Número\n");
			scanf("%f" , &b);
		}
	switch(opc){
		case 1:
			res = a+b;
			printf("\nO Resultado da Operação é: %.2f\n" , res);
			break;
		case 2:
			res = a-b;
			printf("\nO Resultado da Operação é: %.2f\n" , res);
			break;
		case 3:
			res = a*b;
			printf("\nO Resultado da Operação é: %.2f\n" , res);
		break;
		case 4:
			if (b==0){
			printf("O Denominador NÃO Pode ser 0\n");
			}
			else{
				res = a/b;
				printf("\nO Resultado da Operação é: %.2f\n" , res);
			}
			break;
		case 5:
			printf("Programa Finalizado\n");
			break;
		default: printf("Opção Inválida\n");
	}
	}while(opc != 5);
	
	
	system ("pause");
	return 0;
}


