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
	printf("Digite o Primeiro n�mero: \n");
	scanf("%i" , &a);
	printf("Digite o Segundo n�mero: \n");
	scanf("%i" , &b);
	printf("Escolha a Opera��o desejada: \n\n 1- Soma de 2 n�meros. \n 2- Diferen�a entre 2 n�meros \n 3- Produto entre 2 n�meros. \n 4- Divis�o entre 2 n�meros \n");
	scanf("%i" , &c);
	soma = (a+b);
	sub = (a-b);
	sub2 = (b-a);
	prod = (a*b);
switch ( c ){
		case 1:
			printf ("O resultado da Soma �: %d" , soma);
			break;
		case 2:
		    if (a >= b){
		    	printf("O resultado da Subtra��o �: %d" , sub);
			}	
			else {
			printf("O resultado da Subtra��o �: %d" , sub2);
			}
			break;
		case 3:
			printf("O resultado da Multiplica��o �: %d" , prod);
			break;
		
		case 4:
			if  (b != 0){
				div = (float)a/b;
		    	printf("O resultado da Divis�o �: %d" , div);
			}	
			else{
				printf("O Denominador deve ser diferente de 0");
			}
			break;

		default : printf("Op��o inv�lidada, digite um n�mero v�lido ");
	}
	return 0;
}

