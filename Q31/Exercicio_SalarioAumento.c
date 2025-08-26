/*31. Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com aumento de 37%.*/

#include <stdio.h>

int main (){
	float salario, aumento;
	
	printf("INFORME O VALOR DO SEU SALARIO: ");
	scanf("%f", &salario);
	
	aumento = salario + (salario * 0.37);
	
	printf("SEU SALARIO DE R$%.2f COM AUMENTO DE 37%% FICARA: R$%.2f", salario, aumento);
	
	return 0;
}
