#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 01/04/24
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int h1, m1, h2, m2, horas, minutos;
    float total = 0.0;
    printf("Digite o horário de Chegada (horas minutos): \n");
    scanf("%d %d", &h1, &m1);
    printf("Digite o horário de Saída (horas minutos): \n");
    scanf("%d %d", &h2, &m2);
    int totalm = (h2 - h1) * 60 + (m2 - m1);
    int totalh = totalm / 60;
    totalm %= 60;
    switch (totalh) {
        case 1:
        case 2:
            total = 1.0 * totalh;
            break;
        case 3:
        case 4:
            total = 1.4 * (totalh - 2) + 2.0;
            break;
        default:
            total = 2.0 * (totalh - 4) + 3.8;
            break;
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
