/*6. Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse número.*/

#include <stdio.h>

int main(){
	//Declaração de variáveis
    int numero=0;
	
	//Entrada de dados - informa número para realização da tabuada
    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero);

	printf("\nTABUADA DO %d \n\n", numero);
    
	//Processamento e saída de dados - Calcula os primeiros 10 valores da tabuada do número informado 
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
