#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>   
/* Autor: Guilherme Antonio Silva 
Data: 27/05/24
*/

/*
3- Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. 
- Em seguida, escreva o numero de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o numero de alunos cuja pior nota foi na prova 3. 
- Em caso de empate das piores notas de um aluno, o criterio de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez.
*/

int main() {
	setlocale(LC_ALL , "Portuguese");
	
    int notas[10][3];
    int i, j;
    int pior_prova_1 = 0, pior_prova_2 = 0, pior_prova_3 = 0;

    printf("Digite as notas dos 10 alunos em 3 provas:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        int pior_nota = notas[i][0];
        int pior_prova = 1;
        for (j = 1; j < 3; j++) {
            if (notas[i][j] < pior_nota) {
                pior_nota = notas[i][j];
                pior_prova = j + 1;
            }
        }
        if (pior_prova == 1) {
            pior_prova_1++;
        } else if (pior_prova == 2) {
            pior_prova_2++;
        } else if (pior_prova == 3) {
            pior_prova_3++;
        }
    }

    printf("Número de alunos cuja pior nota foi na prova 1: %d\n", pior_prova_1);
    printf("Número de alunos cuja pior nota foi na prova 2: %d\n", pior_prova_2);
    printf("Número de alunos cuja pior nota foi na prova 3: %d\n", pior_prova_3);

    return 0;
}

