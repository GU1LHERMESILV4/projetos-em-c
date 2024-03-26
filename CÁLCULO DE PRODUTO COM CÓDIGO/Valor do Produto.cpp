#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 25/03/24
*/
int main(){
    float cod, quant, total;
    printf("Insira o Codigo do Produto \n");
    scanf("%f", &cod);
    printf("Insira a Quantidade do Produto \n");
    scanf("%f" , &quant);
    if(cod == 100) total = quant*1.20;
    if(cod == 101) total = quant*1.30;
    if(cod == 102) total = quant*1.50;
    if(cod == 103) total = quant*1.20;
    if(cod == 104) total = quant*1.70;
    if(cod == 105) total = quant*2.20;
    if(cod == 106) total = quant*1.00;
    printf ("O Valor do Pedido eh: R$ %.2f \n" , total );

    
    system("pause");
    return 0;
}
