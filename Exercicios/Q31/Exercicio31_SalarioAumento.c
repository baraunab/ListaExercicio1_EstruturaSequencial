/*31. Fa�a um algoritmo que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com aumento de 37%.*/

#include <stdio.h>

int main (){
	//Declara��o de dados
	float salario, aumento;
	
	//Entrada de dados - informa valor atual do sal�rio
	printf("INFORME O VALOR DO SEU SALARIO: ");
	scanf("%f", &salario);
	
	//Processamento - calcula o aumento de 37%;
	aumento = salario + (salario * 0.37);
	
	//Sa�da de dados - exibe o sal�rio com acr�scimo
	printf("SEU SALARIO DE R$%.2f COM AUMENTO DE 37%% FICARA: R$%.2f", salario, aumento);
	
	return 0;
}
