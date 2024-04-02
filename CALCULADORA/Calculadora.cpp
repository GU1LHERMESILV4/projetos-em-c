#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 01/04/24
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c,soma,sub,sub2,prod;
	float div;
	printf("Digite o Primeiro número: \n");
	scanf("%i" , &a);
	printf("Digite o Segundo número: \n");
	scanf("%i" , &b);
	printf("Escolha a Operação desejada: \n\n 1- Soma de 2 números. \n 2- Diferença entre 2 números \n 3- Produto entre 2 números. \n 4- Divisão entre 2 números \n");
	scanf("%i" , &c);
	soma = (a+b);
	sub = (a-b);
	sub2 = (b-a);
	prod = (a*b);
switch ( c ){
		case 1:
			printf ("O resultado da Soma é: %d" , soma);
			break;
		case 2:
		    if (a >= b){
		    	printf("O resultado da Subtração é: %d" , sub);
			}	
			else {
			printf("O resultado da Subtração é: %d" , sub2);
			}
			break;
		case 3:
			printf("O resultado da Multiplicação é: %d" , prod);
			break;
		
		case 4:
			if  (b != 0){
				div = (float)a/b;
		    	printf("O resultado da Divisão é: %d" , div);
			}	
			else{
				printf("O Denominador deve ser diferente de 0");
			}
			break;

		default : printf("Opção inválidada, digite um número válido ");
	}
	return 0;
}

