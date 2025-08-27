/*10. Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.*/

#include <stdio.h>

int main() {
	//Declaração de variáveis
    float diagonal, area_quadrado;
  	
  	//Entrada de dados - informa a diagonal do quadrado
    printf("INSIRA A DIAGONAL DO QUADRADO: ");
    scanf("%f", &diagonal);
    
    //Processamento - calcula area do quadrado com a diagonal
    area_quadrado = ((diagonal*diagonal)/2);
    
    //Saida de dados - Imprime a area calculada
    printf("\nAREA -> (%.2f ^ 2) / 2 = %.2f", diagonal, area_quadrado);

    return 0;
}

