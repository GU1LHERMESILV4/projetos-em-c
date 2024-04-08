#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Autor: Guilherme Antonio Silva 
Data: 08/04/24
*/

int main(){
	setlocale(LC_ALL , "portuguese");
	
	int num, antes = 0, atual = 1, prox;
	printf("Digite um N�mero: \n");
	scanf("%i" , &num);
	printf("\n");
	printf("Sequ�ncia de Fibonacci at� %d: \n", num);
	
	while(atual <= num){
	printf("%d ", atual);
        prox = antes + atual;
        antes = atual;
        atual = prox;	
	}
	    if (prox > num) {
        printf("%d \n\n%d <- Esse � o Pr�ximo Termo \n", prox,prox);
    }
	return 0;
}
