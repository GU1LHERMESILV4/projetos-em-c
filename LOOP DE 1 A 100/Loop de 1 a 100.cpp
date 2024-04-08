#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 08/04/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int num = 1;
	while(num <=10000){
		printf("%i \n" , num);
		num = num + 1;
	}
	return 0;
}

