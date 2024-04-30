#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 29/04/24
*/

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int numero, soma = 0, quantidade = 0, maior = -9999, menor = 9999;
    float media;

    printf("Digite um Número ou 0 para Sair:\n");
    scanf("%d", &numero);

    while (numero!= 0) {
        soma += numero;
        quantidade++;

        if (numero > maior)
            maior = numero;

        if (numero < menor)
            menor = numero;
            
                    if (quantidade > 0) {
        media = (float) soma / quantidade;
    }

	    printf("\nA Soma dos Números Digitados é: %d\n", soma);
	    printf("A quantidade de Números Digitados é: %d\n", quantidade);
	    printf("A Média dos Números Digitados é: %.2f\n", media);
	    printf("O Maior Número Digitado foi: %d\n", maior);
	    printf("O Menor Número Digitado foi: %d\n", menor);


        printf("\nDigite um Número ou 0 para Sair:\n");
        scanf("%d", &numero);

    }

    system ("pause");
    return 0;
}
