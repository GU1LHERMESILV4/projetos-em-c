#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 25/03/24
*/

int main(){
	int idade;
		printf ("Informe sua Idade: \n");
     	scanf ("%i" ,  &idade);
    int tempo;
		printf ("Informe seu Tempo de Servico: \n");
     	scanf ("%i" ,  &tempo);
    if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo>= 25 ){
    	printf("Voce pode se Aposentar \n");
	}

	else{
		printf("Voce nao pode se aposentar \n");
	}
	system("pause");
	return 0;
}
