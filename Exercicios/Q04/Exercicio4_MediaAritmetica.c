/*4. Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e imprima a m�dia aritm�tica entre essas notas.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    float n1, n2, n3, media = 0;
	
	//Entrada de dados - Insere 3 notas
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

	//Processamento - Media aritm�tica das 3 notas
    media = (n1 + n2 + n3)/3;
	
	//Sa�da de dados - Imprime a m�dia calculada
    printf ("\nNOTA 1: %.2f \nNOTA 2: %.2f \nNOTA 3: %.2f \nMEDIA FINAL: %.2f", n1, n2, n3, media);

    return 0;
}

