/*31. Fa�a um algoritmo que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com aumento de 37%.*/

#include <stdio.h>

int main (){
	float salario, aumento;
	
	printf("INFORME O VALOR DO SEU SALARIO: ");
	scanf("%f", &salario);
	
	aumento = 1.37 * salario;
	
	printf("SEU SALARIO DE R$%.2f COM AUMENTO DE 37%% FICARA: R$%.2f", salario, aumento);
	
	return 0;
}
