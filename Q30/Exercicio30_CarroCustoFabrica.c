/*30. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de f�brica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de f�brica de um carro e informe o custo ao
consumidor do mesmo.*/

#include <stdio.h>

int main (){
	float custo_consumidor, custo_fabrica, custo_impostos, porcentagem_distribuidor = 0.28, imposto = 0.45;
	
	printf("INSIRA O CUSTO DE FABRICA DE UM CARRO: ");
	scanf("%f", &custo_fabrica);
	
	custo_impostos = custo_fabrica + (custo_fabrica * imposto); 
	custo_consumidor = custo_impostos + (custo_impostos * porcentagem_distribuidor);

	printf("\nCUSTO DE FABRICA: R$%.2f \nCUSTO COM IMPOSTOS: R$%.2f\nCUSTO COM PORCENTAGEM DO DISTRIBUIDOR E FINAL DO CONSUMIDOR: R$%.2f", 
			custo_fabrica, custo_impostos, custo_consumidor);
	
	return 0;	
}
