#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 06/05/24
*/

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	float base, altura, area; 

	printf("Digite o Valor da Base do Triângulo:\n");
	scanf("%f" , &base);	
	
	if(base <= 0 ){
		printf("\nO VALOR INVÁLIDO!!\n(O VALOR DIGITADO DEVE SER MAIOR QUE 0)\n");
	}
	
	printf("\nDigite o Valor da Altura do Triângulo:\n");
	scanf("%f" , &altura);
	if(altura <= 0){
		printf("\nO VALOR INVÁLIDO!!\n(O VALOR DIGITADO DEVE SER MAIOR QUE 0)\n");
	}
	else{
		area = (base*altura)/2;
		printf("\nA Área do Seu Triângulo é: %.f\n\n", area);
	}

	system("pause");
	return 0;
}
