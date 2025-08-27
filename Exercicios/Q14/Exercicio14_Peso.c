/*14. Fa�a um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
    - o peso dessa pessoa em gramas;
    - se essa pessoa engordar 5%, qual ser� seu novo peso em gramas.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    int peso, gramas, novo_peso;
    
    //Entrada de dados - Informa peso
    printf("INSIRA SEU PESO: ");
    scanf("%d", &peso);
	
	//Processamento de dados - converte para gramas e adiciona porcentagem
    gramas = peso * 1000;

    novo_peso = gramas + (0.05 * peso);
	
	//Saida de dados - informa o peso convertido e com adi��o de porcentagem
    printf("\nSEU PESO EM GRAMAS: %d g\nADICAO DE 5%% NO SEU PESO: %d g", gramas, novo_peso);

    return 0;
}
