/*14. Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
    - o peso dessa pessoa em gramas;
    - se essa pessoa engordar 5%, qual será seu novo peso em gramas.*/

#include <stdio.h>

int main()
{
    int peso, gramas, novo_peso;
    printf("INSIRA SEU PESO: ");
    scanf("%d", &peso);

    gramas = peso * 1000;

    novo_peso = gramas + (0.05 * peso);

    printf("\nSEU PESO EM GRAMAS: %d g\nADICAO DE 5%% NO SEU PESO: %d g", gramas, novo_peso);

    return 0;
}
