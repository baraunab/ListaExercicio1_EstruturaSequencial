/*7. Fa�a um algoritmo que receba dois n�meros, calcule e imprima um elevado ao outro.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int base, expoente, calculo=0;

    printf("INSIRA A BASE DA POTENCIA: ");
    scanf("%d", &base);

    printf("INSIRA O EXPOENTE DA POTENCIA: ");
    scanf("%d", &expoente);

    calculo = pow(base, expoente);

    printf("%d ^ %d = %d", base, expoente, calculo);

    return 0;
}

