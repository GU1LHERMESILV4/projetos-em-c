#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 06/05/24
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n, i;
    
    printf("Quantas Vezes Deseja Simular o Lançamento dos Dados?\n");
    scanf("%d", &n);

    srand(time(NULL));

    printf("Resultado dos lançamentos:\n");
    for (i = 0; i < n; i++) {
        int d1 = (rand() % 6) + 1;
        int d2 = (rand() % 6) + 1;

        printf("\nLançamento %d: \nDado 1: %d, \nDado 2: %d, \n", i+1, d1, d2);
        
        if (d1 > d2)
            printf("\nDado 1 > Dado 2\n");
        else if (d1 < d2)
            printf("\nDado 1 < Dado 2\n");
        else
            printf("\nDado 1 = Dado 2\n");
    }

    return 0;
}

