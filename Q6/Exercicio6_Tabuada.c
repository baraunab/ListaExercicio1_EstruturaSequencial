/*6. Fa�a um algoritmo que receba um n�mero inteiro, calcule e imprima a tabuada de multiplica��o desse n�mero.*/

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
