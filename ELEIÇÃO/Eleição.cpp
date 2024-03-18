#include <stdio.h>
#include <stdlib.h>
/*Autor: Guilherme Antonio Silva
Data: 18/03/2024
*/

int main(){
	
		int ano;
	printf("Digite o seu ano de nascimento \n");
	scanf("%i" , &ano);
	

	int idade = 2024 - ano;
	int maior = 18;
	
	if (idade >= maior){
				printf ("Voce pode votar na proxima eleicao \n");
				
	} 

	else{
			printf("Voce nao pode votar na proxima eleicao \n");	
	}
		system("pause");
    return 0;

}

