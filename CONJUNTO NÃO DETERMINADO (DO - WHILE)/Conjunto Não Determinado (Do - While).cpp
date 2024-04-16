#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Autor: Guilherme Antonio Silva 
Data: 15/04/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");

	float termo, quad, cubo, raiz;


	do{
	printf("Digite o Termo do seu Conjunto: \n");
	scanf("%f", &termo);
			if(termo <= 0){
			printf("O valor do Termo Não pode ser NEGATIVO ou ZERO \n\n PROGRAMA FINALIZADO");
		break;	
}
		quad = termo * termo;
		cubo = termo * termo * termo;
		raiz = sqrt(termo);
		
		printf("O quadrado de %.2f é %.2f\n", termo, quad);
        printf("O cubo de %.2f é %.2f\n", termo, cubo);
        printf("A raiz quadrada de %.2f é %.2f\n", termo, raiz);
        printf("\n");

	} while(1);

	return 0;
}
