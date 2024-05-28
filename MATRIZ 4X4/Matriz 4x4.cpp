#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Autor: Guilherme Antonio Silva 
Data: 27/05/24
*/

/*
1- Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
*/

int main() {
	setlocale(LC_ALL , "Portuguese");
	
    int matriz[4][4];
    int i, j;
    int maxvalor = -1;
    int maxlinha = 0;
    int maxcoluna = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    maxvalor = matriz[0][0]; 
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maxvalor) {
                maxvalor = matriz[i][j];
                maxlinha = i;
                maxcoluna = j;
            }
        }
    }

    printf("\nO maior valor é %d e está localizado na linha %d e coluna %d\n", maxvalor, maxlinha, maxcoluna);

    return 0;
}

