/*6. Fa�a um algoritmo que receba um n�mero inteiro, calcule e imprima a tabuada de multiplica��o desse n�mero.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    int numero=0;
	
	//Entrada de dados - informa n�mero para realiza��o da tabuada
    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero);

	printf("\nTABUADA DO %d \n\n", numero);
    
	//Processamento e sa�da de dados - Calcula os primeiros 10 valores da tabuada do n�mero informado 
	printf("%d x 1 = %d\n", numero, numero*1);
	printf("%d x 2 = %d\n", numero, numero*2);
	printf("%d x 3 = %d\n", numero, numero*3);
	printf("%d x 4 = %d\n", numero, numero*4);
	printf("%d x 5 = %d\n", numero, numero*5);
	printf("%d x 6 = %d\n", numero, numero*6);
	printf("%d x 7 = %d\n", numero, numero*7);
	printf("%d x 8 = %d\n", numero, numero*8);
	printf("%d x 9 = %d\n", numero, numero*9);
	printf("%d x 10 = %d\n", numero, numero*10);	

    return 0;
}
