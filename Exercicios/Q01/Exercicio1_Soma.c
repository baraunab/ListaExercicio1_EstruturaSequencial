/*1. Fa�a um algoritmo que receba dois n�meros inteiros e imprima a soma desses dois n�meros.*/
#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    int inteiro1;
    int inteiro2;
    int soma = 0;
	
	//Entrada de dados - informa dois valores
    printf ("Digite o primeiro inteiro: \n");
    scanf("%d", &inteiro1);

    printf ("Digite o segundo inteiro: \n");
    scanf("%d", &inteiro2);
	
	//Processamento - Soma dos dois valores 
    soma = inteiro1 + inteiro2;

	//Saida de dados - imprime a soma
    printf("A soma eh %d\n", soma);
}
