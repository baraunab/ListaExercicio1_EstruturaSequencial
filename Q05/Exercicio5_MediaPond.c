/*5. Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a média ponderada dessas notas.*/

#include <stdio.h>

int main()
{
    float n1, n2, media_ponderada = 0;
    int  p1, p2;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira o peso da primeira nota: ");
    scanf("%d", &p1);

    printf("\nInsira a segunda nota: ");
    scanf("%f", &n2);

    printf("Insira o peso da segunda nota: ");
    scanf("%d", &p2);

    media_ponderada = (n1*p1+n2*p2)/(p1+p2);

    printf ("\nPRIMEIRA NOTA: %f - PESO: %d \nSEGUNDA NOTA: %f - PESO: %d \nMEDIA PONDERADA FINAL: %f", n1, p1, n2, p2, media_ponderada);

    return 0;
}
