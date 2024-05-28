#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   
/* Autor: Guilherme Antonio Silva 
Data: 27/05/24
*/

/*
2- Faça um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela devera conter 5 linhas de 5 números
- Gere estes dados de modo a nao ter números repetidos dentro das cartelas. 
- O programa deve exibir na tela a cartela gerada.
*/

#define BINGO_SIZE 25 
#define MAX_NUM 100 

void shuffle(int *array, int n) {
    if (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            int j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = array[i];
            array[i] = array[j];
            array[j] = t;
        }
    }
}

int main() {
	setlocale(LC_ALL , "Portuguese");
	
    int cartela[5][5];
    int numeros[MAX_NUM];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < MAX_NUM; i++) {
        numeros[i] = i;
    }

    shuffle(numeros, MAX_NUM);

    int k = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cartela[i][j] = numeros[k++];
        }
    }

    printf("Cartela de Bingo 5x5 com valores aleatórios não repetidos:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}


