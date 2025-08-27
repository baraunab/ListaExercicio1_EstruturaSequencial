/* 11. Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de 
   renda a ser pago, sabendo que o imposto equivale a 5% do salário.*/
#include <stdio.h>   
   
int main (){
	//Declaração de Variáveis
	float salario_funcionario, imposto_renda;
	
	//Entrada de dados - informa o salario
	printf("INSIRA SEU SALARIO PARA CALCULAR O IMPOSTO DE RENDA: R$");
	scanf("%f", &salario_funcionario);
	
	//Processamento - calculo de imposto de renda
	imposto_renda = 0.05 * salario_funcionario;
	
	//Saida de dados - informando imposto de rendo a ser pago
	printf("IMPOSTO DE RENDA - 5%% de R$ %.2f: R$ %.2f", salario_funcionario, imposto_renda);
	
	return 0;
}
