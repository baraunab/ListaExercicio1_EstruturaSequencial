/*36. Fa�a um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite esse
espet�culo. Esse programa deve calcular e mostrar:
	- A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
	- A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float custo_teatro, preco_convite, qtd_convite_custo_teatro, qtd_convite_lucro23;
	
	//Entrada de dados - Informa custo teatral e pre�o do convite 
	printf("INSIRA O CUSTO TEATRAL: ");
	scanf("%f", &custo_teatro);
	
	printf("INSIRA O PRECO DO CONVITE: ");
	scanf("%f", &preco_convite);
	
	//Processamento - Calcula quantidades de convites a serem vendidos para cubrir custo e lucrar 23%
	qtd_convite_custo_teatro = custo_teatro/preco_convite;
	qtd_convite_lucro23 = (custo_teatro * 1.23) / preco_convite;
	
	//Sa�da de dados - informa quantidades calculadas
	printf("\nCUSTO DO TEATRO: R$%.2f \nPRECO DO CONVITE: R$%.2f ",custo_teatro, preco_convite);
	printf("\n\nQUANTIDADE DE CONVITES PARA COBRIR O CUSTO DO TEATRO: %.2f", qtd_convite_custo_teatro);
	printf("\nQUANTIDADE DE CONVITES COM LUCRO DE 23%%: %.2f", qtd_convite_lucro23);
		
	return 0;
}
