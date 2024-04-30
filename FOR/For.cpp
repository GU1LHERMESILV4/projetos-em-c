#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 29/04/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	int i;
	
	for(i=1 ; i<=100 ; i++){
		printf("%d ", i);
	}
	printf("\n\n");
	i = 1;
	while(i <= 100){
		printf("%d " , i);
		i++;
	}
	printf("\n\n");
	i= 1;
	do{
		printf("%d " , i);
		i++;
	}while(i<=100);
	
	printf("\n\n");
	
	system ("pause");
	return 0;
}
