#include <stdio.h>
#include <stdlib.h>
/*Autor: Guilherme Antonio Silva
Data: 18/03/2024
*/

int main(){
	
		int a;
	printf("Digite um numero \n");
	scanf("%i" , &a);
	
		int b;
	printf("Digite um numero \n");
	scanf("%i" , &b);
	
	if (a > b){
				printf ("%i eh maior que %i \n" , a , b);
				
	} 

	else{
			printf("%i eh maior que %i \n" , b , a);	
	}
		system("pause");
    return 0;

}

