/*9. Fa�a um programa que receba um n�mero inteiro, calcule e imprima:
        - a raiz quadrada desse n�mero;
        - esse n�mero elevado ao quadrado.*/

#include <stdio.h>

int main() {
	//Declara��o de vari�veis
    double numero, potencia=0, raiz=0;
	
	//Entrada de dados - informa um numero
    printf("INSIRA UM NUMERO: ");
    scanf("%lf", &numero);
	
	//Processamento de dados - calcula potencia e raiz quadrada do numero informado
    potencia = numero * numero;
	raiz = sqrt(numero);	
	
	//Saida de dados - Imprime a raiz e potencia do numero 
    printf("\nRAIZ QUADRADA DE %.0lf  = %.2lf \n%.0lf ^ 2 = %.0lf", numero, raiz, numero, potencia);

    return 0;
}
