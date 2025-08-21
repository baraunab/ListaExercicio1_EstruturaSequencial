/*6. Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse número.*/

#include <stdio.h>

int main()
{
    int numero=0;
    int multi=0;

    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero);

    printf("\nTABUADA DO %d \n\n", numero);

    for (int i=0; i<10; i++){

        multi = numero*(i+1);

        printf("%d x %d = %d", numero, (i+1), multi);
        printf("\n");
    }

    return 0;
}
