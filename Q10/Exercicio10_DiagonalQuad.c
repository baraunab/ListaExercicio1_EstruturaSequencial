/*10. Calcular e exibir a �rea de um quadrado a partir do valor de sua diagonal que ser� digitado.*/

#include <stdio.h>

int main()
{
    float diagonal, area_quadrado;
    printf("INSIRA A DIAGONAL DO QUADRADO: ");
    scanf("%f", &diagonal);
    
    area_quadrado = ((diagonal*diagonal)/2);
    
    printf("\nAREA -> (%.2f ^ 2) / 2 = %.2f", diagonal, area_quadrado);

    return 0;
}

