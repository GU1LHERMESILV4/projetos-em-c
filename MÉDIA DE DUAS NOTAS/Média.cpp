#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 11/03/24
*/

    int main(){
    
	float n1;
    	printf ("Informe sua nota n1: \n");
    	    scanf ("%f" ,  &n1);
    float n2;
		printf ("Informe sua nota n2: \n");	
	    scanf ("%f" , &n2);
	float media = (n1+n2)/2;
	printf ("Sua media eh:  %.2f\n" , media );
    
	system("pause");
    return 0;
}

