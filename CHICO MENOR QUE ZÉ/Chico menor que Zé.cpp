#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Autor: Guilherme Antonio Silva 
Data: 08/04/24
*/

int main() {
	setlocale(LC_ALL , "portuguese");
	
    double chico = 1.50, zelda = 1.10;
    int anos = 0;

    while (zelda <= chico) {
        chico += 0.02; // Chico cresce 2 cent�metros por ano
        zelda += 0.03; // Z� cresce 3 cent�metros por ano
        anos++;
    }

    printf("Ser�o necess�rios %d anos para que Z� seja maior que Chico.\n", anos);

    return 0;
}
