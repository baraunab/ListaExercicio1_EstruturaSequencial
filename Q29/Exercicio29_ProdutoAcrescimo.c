/*29. Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se
que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.*/

#include <stdio.h>

int main (){
	float preco_produto, porcentagem, preco_venda;
	
	printf("INSIRA O PRECO DO PRODUTO: ");
	scanf("%f", &preco_produto);
	
	printf("INSIRA O PERCENTUAL A SER ADICIONADO AO PRECO DO PRODUTO: ");
	scanf("%f", &porcentagem);
	
	porcentagem /= 100;
	preco_venda = preco_produto + (preco_produto * porcentagem);
	
	printf("\n\nPRECO DO PRODUTO: R$%.2f \nPRECO COM ACRESCIMO DE %.f%%: R$%.2f", 
	preco_produto, porcentagem*100, preco_venda);
	
	return 0;
}

