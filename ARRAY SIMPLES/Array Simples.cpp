#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 21/05/24
*/


/*
1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.

(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições
 A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.

(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int A[6] = {1, 0, 5, -2, -5, 7};
	int s= A[0] + A[1] + A[5];
	
	A[4] = 100;
	
	printf("Os Valores do Vetor A são:\n %d\n %d\n %d\n %d\n %d\n %d\n", A[0], A[1], A[2], A[3], A[4], A[5]);
	
	return 0;
}
	
