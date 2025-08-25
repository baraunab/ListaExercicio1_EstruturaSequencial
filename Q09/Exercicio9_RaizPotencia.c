/*9. Faça um programa que receba um número inteiro, calcule e imprima:
        - a raiz quadrada desse número;
        - esse número elevado ao quadrado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double numero, potencia=0, raiz=0;

    printf("INSIRA UM NUMERO: ");
    scanf("%lf", &numero);

    potencia = pow(numero, 2);
	    raiz = sqrt(numero);

    printf("\nRAIZ QUADRADA DE %.0lf  = %.2lf \n%.0lf ^ 2 = %.0lf", numero, raiz, numero, potencia);

    return 0;
}
