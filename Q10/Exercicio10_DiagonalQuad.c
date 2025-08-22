/*10. Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float diagonal, area_quadrado;
    printf("INSIRA A DIAGONAL DO QUADRADO: ");
    scanf("%f", &diagonal);
    
    area_quadrado = (pow(diagonal, 2)/2);
    
    printf("\nAREA -> (%.2f ^ 2) / 2 = %.2f", diagonal, area_quadrado);

    return 0;
}

