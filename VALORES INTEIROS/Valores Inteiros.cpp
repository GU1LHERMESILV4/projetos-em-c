#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 21/05/24
*/


/*
2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int V[6];
	int i;
	
	for(i=0; i<6; i++){
		printf("Digite um Valor Inteiro para V[%d]:\n", i);
		scanf("%d", &V[i]);
	}	
    printf("Os Valores Lidos Foram:\n");
    for (int i = 0; i < 6; i++) {
        printf("V[%d] = %d\n", i, V[i]);
    }
	
	return 0;
}
