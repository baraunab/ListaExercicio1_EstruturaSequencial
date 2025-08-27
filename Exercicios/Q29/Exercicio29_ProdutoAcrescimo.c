/*29. Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float preco_produto, porcentagem, preco_venda;
	
	//Entrada de dados - informa o preço do produto e porcentagem a ser acrescentada
	printf("INSIRA O PRECO DO PRODUTO: ");
	scanf("%f", &preco_produto);
	
	printf("INSIRA O PERCENTUAL A SER ADICIONADO AO PRECO DO PRODUTO: ");
	scanf("%f", &porcentagem);
	
	//Processamento - converte a porcentagem em decimal e calcula o preço da venda
	porcentagem /= 100;
	preco_venda = preco_produto + (preco_produto * porcentagem);
	
	//Saída de dados - imprime o preço do produto calculado
	printf("\n\nPRECO DO PRODUTO: R$%.2f \nPRECO COM ACRESCIMO DE %.f%%: R$%.2f", 
	preco_produto, porcentagem*100, preco_venda);
	
	return 0;
}

