/*30. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
consumidor do mesmo.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float custo_consumidor, custo_fabrica, custo_impostos, porcentagem_distribuidor = 0.28, imposto = 0.45;
	
	//Entrada de dados - informa o valor de fábrica
	printf("INSIRA O CUSTO DE FABRICA DE UM CARRO: ");
	scanf("%f", &custo_fabrica);
	
	//Processamento - calcula o custo com adicional de impostos e preço do distribuidor
	custo_impostos = custo_fabrica + (custo_fabrica * imposto); 
	custo_consumidor = custo_impostos + (custo_impostos * porcentagem_distribuidor);

	//Saída de dados - Informa o preço final do consumidor
	printf("\nCUSTO DE FABRICA: R$%.2f \nCUSTO COM IMPOSTOS: R$%.2f\nCUSTO FINAL: R$%.2f", 
			custo_fabrica, custo_impostos, custo_consumidor);
	
	return 0;	
}
