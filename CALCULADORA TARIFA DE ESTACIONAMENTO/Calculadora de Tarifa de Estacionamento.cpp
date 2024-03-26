#include <stdio.h>
/* Autor: Guilherme Antonio Silva 
Data: 25/03/24
*/
int main()
{
    int h1, m1, h2, m2, horas, minutos, total;
    printf("Digite a hora de chegada no formato hh mm: \n");
    scanf("%d %d", &h1, &m1);
    printf("Digite a hora de saida no formato hh mm: \n");
    scanf("%d %d", &h2, &m2);
    if (h2 < h1)
        h2 += 24;
    horas = h2 - h1;
    minutos = m2 - m1;
    if (minutos < 0) {
        horas--;
        minutos += 60;
    }
    total = horas * 60 + minutos;
    if (total <= 60)
        printf("Valor a pagar: R$ 1,00\n");
    else if (total <= 120)
        printf("Valor a pagar: R$ 2,00\n");
    else if (total <= 240)
        printf("Valor a pagar: R$ 4,80\n");
    else
        printf("Valor a pagar: R$ 2,00 cada hora apos 4 horas - Total: R$ %.2f\n", (float)total/60 * 2);
    return 0;
}
