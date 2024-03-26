#include <stdio.h>
/* Autor: Guilherme Antonio Silva 
Data: 25/03/24
*/
int main()
{
    float distancia, litros, consumo;
    printf("Digite a Distancia em km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de Litros Consumida: ");
    scanf("%f", &litros);
    consumo = distancia / litros;
    if (consumo < 8) {
        printf("\nVenda o Carro!!! \n");
        printf("Media de %.2f Km/l", consumo);
    }
    else if (consumo >= 8 && consumo < 12) {
        printf("\nCarro Economico!!! \n");
        printf("Media de %.2f Km/l", consumo);
    }
    else {
        printf("\nCarro Muito Economico!!! \n");
        printf("Media de %.2f Km/l", consumo);
    }
    return 0;
}
