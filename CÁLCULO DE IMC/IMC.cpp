#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float	peso;
    	printf ("Informe seu peso : \n");
    	    scanf ("%f" ,  &peso);
	float	altura;
		printf ("Informe sua altura: \n");	
	    scanf ("%f" ,  &altura);
	
	float imc;
	imc = peso/(altura*altura);
	printf ("Seu IMC e: %f\n", imc);
    
	system("pause");
    return 0;
}
