/*31. Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com aumento de 37%.*/

#include <stdio.h>

int main (){
	//Declaração de dados
	float salario, aumento;
	
	//Entrada de dados - informa valor atual do salário
	printf("INFORME O VALOR DO SEU SALARIO: ");
	scanf("%f", &salario);
	
	//Processamento - calcula o aumento de 37%;
	aumento = salario + (salario * 0.37);
	
	//Saída de dados - exibe o salário com acréscimo
	printf("SEU SALARIO DE R$%.2f COM AUMENTO DE 37%% FICARA: R$%.2f", salario, aumento);
	
	return 0;
}
