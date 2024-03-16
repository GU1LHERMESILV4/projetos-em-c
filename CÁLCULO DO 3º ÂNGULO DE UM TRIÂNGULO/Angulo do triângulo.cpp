#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float Angulo1;
    	printf ("Informe o primeiro angulo: \n");
    	    scanf ("%f" ,  &Angulo1);
    float Angulo2;
		printf ("Informe o segundo angulo: \n");	
	    scanf ("%f" , &Angulo2);
	float Angulo3 = 180-(Angulo1+Angulo2);
	printf ("O terceiro angulo vale:  %.2f\n" , Angulo3 );
    
	system("pause");
    return 0;
}

