#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Autor: Guilherme Antonio Silva 
Data: 21/05/24
*/


/*
3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. 
Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.
*/

int main(){
	setlocale(LC_ALL , "Portuguese");

    double numeros[10];
    double quadrados[10];

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nValores Originais:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\n\nQuadrados dos Valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }

    printf("\n");

    return 0;
}
	
