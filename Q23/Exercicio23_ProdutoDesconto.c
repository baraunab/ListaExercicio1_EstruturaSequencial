/*23. No momento, por conta da administra��o p�blica p�ssima e da corrup��o em todos os setores
estatais, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista 
que o desconto foi de 9%.*/

#include <stdio.h>

int main (){
	float preco_produto, preco_desconto;
	
	printf("INSIRA O VALOR DO PRODUTO: ");
	scanf("%f", &preco_produto);
	
	preco_desconto = preco_produto - (0.09 * preco_produto);
	
	printf("\nPRECO ORIGINAL: R$%.2f \nPRECO COM DESCONTO DE 9%%: R$%.2f", preco_produto, preco_desconto);
	return 0;
	
}
