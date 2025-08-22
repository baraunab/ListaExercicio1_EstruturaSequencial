/*12. Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
      sabendo-se que este sofreu um aumento de 25%.*/
#include <stdio.h>

int main (){
	//Declaração de variaveis
	float salario_funcionario;
	
	//Entrada de dados - Informando o salario atual
	printf("INFORME SEU SALARIO ATUAL: R$");
	scanf("%f", &salario_funcionario);
	
	//Processamento - calculo do aumento
	salario_funcionario += 0.25 * salario_funcionario;
	
	//Saida de dados - Exibe o novo valor do salario
	printf("SEU SALARIO COM AUMENTO DE 25%% FICARA R$ %.2f", salario_funcionario);
	
	return 0; 

}
  
