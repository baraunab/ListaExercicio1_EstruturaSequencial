/*9. Fa�a um programa que receba um n�mero inteiro, calcule e imprima:
        - a raiz quadrada desse n�mero;
        - esse n�mero elevado ao quadrado.*/

#include <stdio.h>

int main()
{
    double numero, potencia=0, raiz=0;

    printf("INSIRA UM NUMERO: ");
    scanf("%lf", &numero);

    potencia = numero * numero;
	raiz = sqrt(numero);

    printf("\nRAIZ QUADRADA DE %.0lf  = %.2lf \n%.0lf ^ 2 = %.0lf", numero, raiz, numero, potencia);

    return 0;
}
