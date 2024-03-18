#include <stdio.h>
#include <stdlib.h>
/*Autor: Guilherme Antonio Silva
Data: 18/03/2024
*/

int main(){
	
		float n1;
	printf("Digite a nota N1: \n");
	scanf("%f" , &n1);
	
		float n2;
	printf("Digite a nota N2 \n");
	scanf("%f" , &n2);
		float media = (n1+n2)/2;
	
	if (media >= 6){
				printf ("Aprovado \n");
				
	} 
    else{
			printf("Reprovado \n");	
	}
		system("pause");
    return 0;

}

