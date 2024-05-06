#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 06/05/24
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int soma = 0;
    int i;

    for (i = 1; i < 1000; i++) {
        // Verifica se o n�mero � m�ltiplo de 3 ou 5
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i; // Adiciona o n�mero � soma
        }
    }

    printf("A soma de todos os n�meros naturais abaixo de 1000 que s�o m�ltiplos de 3 ou 5 �: %d\n", soma);

    return 0;
}

