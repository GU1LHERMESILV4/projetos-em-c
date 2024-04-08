#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 08/04/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int km, m, tipo;
	float kmh, ms;

	while(tipo != 3){
	printf("[Escolha o Tipo de Conversão] \n\n 1-KM/h \n 2-M/s \n 3-Finalizar \n");
	scanf("%i" , &tipo);
	switch (tipo){
		case 1:
			printf("Digite o Valor em M/s \n");
			scanf("%i" , &m);
			kmh = (m/1) * 3.6;
			printf("O Resultado é: %.2f Quilômetros por hora \n\n\n" , kmh);
			break;
		case 2:
			printf("Digite o Valor em KM/h \n");
			scanf("%i" , &km);
			ms = (km/1) / 3.6;
			printf("O Resultado é: %.2f Metros por Segundo \n\n\n" , ms);
			break;
		case 3:
		printf("Programa Finalizado");
		break;
	}
	}
	return 0;
}
