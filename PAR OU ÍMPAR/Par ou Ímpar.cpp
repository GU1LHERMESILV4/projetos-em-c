#include <stdio.h>
#include <stdlib.h>
/*Autor: Guilherme Antonio Silva
Data: 18/03/2024
*/

int main(){
	int num;
	printf("Digite um numero inteiro \n");
	scanf("%i" , &num);
	if (num % 2 ){
		printf ("O seu numero eh impar \n");
	}
	else{
		printf("O seu numero eh par \n");
	}
	system("pause");
    return 0;
	
}
