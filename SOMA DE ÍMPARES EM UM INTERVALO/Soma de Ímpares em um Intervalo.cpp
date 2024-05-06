#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 06/05/24
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int valor_inicial, valor_final, soma = 0;

    printf("Digite o valor inicial e o valor final do intervalo: ");
    scanf("%d %d", &valor_inicial, &valor_final);

    if (valor_inicial > valor_final) {
        printf("Intervalo de valores inválido.\n");
        return 1; 
    }

    for (int i = valor_inicial; i <= valor_final; i++) {
        if (i % 2 != 0) { 
            soma += i; 
        }
    }

    printf("\nSoma dos ímpares neste intervalo é %d\n", soma);

    return 0;
}

