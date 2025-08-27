/*36. Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
espetáculo. Esse programa deve calcular e mostrar:
	- A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
	- A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.*/

#include <stdio.h>

int main (){
	float custo_teatro, preco_convite, qtd_convite_custo_teatro, qtd_convite_lucro23;
	
	printf("INSIRA O CUSTO TEATRAL: ");
	scanf("%f", &custo_teatro);
	
	printf("INSIRA O CUSTO DO CONVITE: ");
	scanf("%f", &preco_convite);
	
	qtd_convite_custo_teatro = custo_teatro/preco_convite;
	qtd_convite_lucro23 = (custo_teatro * 1.23) / preco_convite;
	
	printf("\nCUSTO DO TEATRO: R$%.2f \nPRECO DO CONVITE: R$%.2f ",custo_teatro, preco_convite);
	printf("\n\nQUANTIDADE DE CONVITES PARA COBRIR O CUSTO DO TEATRO: %.2f", qtd_convite_custo_teatro);
	printf("\nQUANTIDADE DE CONVITES COM LUCRO DE 23%%: %.2f", qtd_convite_lucro23);
		
	return 0;
}
