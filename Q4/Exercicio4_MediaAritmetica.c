/*4. Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media = 0;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3;

    printf ("\nNOTA 1: %f \nNOTA 2: %f \nNOTA 3: %f \nMEDIA FINAL: %f", n1, n2, n3, media);

    return 0;
}

