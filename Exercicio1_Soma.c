/*1. Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.*/
#include <stdio.h>

int main(){

    int inteiro1;
    int inteiro2;
    int soma = 0;

    printf ("Digite o primeiro inteiro: \n");
    scanf("%d", &inteiro1);

    printf ("Digite o segundo inteiro: \n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("A soma eh %d\n", soma);
}
