#include <stdio.h>
#include <stdlib.h>
/*Autor: Guilherme Antonio Silva
Data: 18/03/2024
*/

int main(){
	int senha = 1234, Susuario;
	printf("Digite uma senha de 4 numeros: \n");
	scanf("%i" , &Susuario);
	if (Susuario == senha){
		printf ("Acesso permitido \n");
	}
	else{
		printf("Acesso negado \n");
	}
	system("pause");
    return 0;
	
}
