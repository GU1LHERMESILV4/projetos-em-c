#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float distancia;
    	printf ("Informe a distancia: \n");
    	    scanf ("%f" ,  &distancia);
    float litros;
		printf ("Informe a quantidade de litos: \n");	
	    scanf ("%f" , &litros);
	float consumo = (distancia/litros);
	printf ("Seu consumo   %.2f\n" , consumo );
    
	system("pause");
    return 0;
}

