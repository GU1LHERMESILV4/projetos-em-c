#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float far;
    	printf ("Informe a temperatura em graus Fahrenheint: \n");
    	    scanf ("%f" ,  &far);
	float cel = (far - 32) * 5/9;
	printf ("A temperatura em graus Celsius eh:  %.2f\n" , cel );
    
	system("pause");
    return 0;
}


