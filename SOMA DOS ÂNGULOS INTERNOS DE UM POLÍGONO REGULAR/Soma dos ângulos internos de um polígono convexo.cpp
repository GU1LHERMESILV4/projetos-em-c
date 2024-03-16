#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float lados;
    	printf ("Informe a quantidade de lados: \n");
    	    scanf ("%f" ,  &lados);
	float soma = (lados - 2) * 180;
	printf ("A soma dos angulos interno desse poligono convexo eh:  %.2f\n" , soma );
    
	system("pause");
    return 0;
}


