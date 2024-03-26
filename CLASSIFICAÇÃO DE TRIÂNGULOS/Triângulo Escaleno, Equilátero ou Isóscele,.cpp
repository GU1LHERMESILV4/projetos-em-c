#include <stdio.h>
#include <stdlib.h>
/* Autor: Guilherme Antonio Silva 
Data: 25/03/24
*/

int main()
{
    int A, B, C;
    printf("Digite o valor do lado A do triangulo: ");
    scanf("%d", &A);
    printf("Digite o valor do lado B do triangulo: ");
    scanf("%d", &B);
    printf("Digite o valor do lado C do triangulo: ");
    scanf("%d", &C);
    if (A < B + C && B < A + C && C < A + B) {
        printf("Os valores %d, %d e %d PODEM formar um triangulo!\n", A, B, C);
        if (A == B && B == C)
            printf("Triangulo EQUILATERO!!!");
        else if (A == B || B == C || A == C)
            printf("Triangulo ISOSCELES!!!");
        else
            printf("Triangulo ESCALENO!!!");
    }
    else {
        printf("Os valores %d, %d e %d NAO PODEM formar um triangulo!\n", A, B, C);
    }
    system("pause");
    return 0;
}
