/*28. A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. ]
Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es*/

#include <stdio.h>
int main (){
	//Declara��o de vari�veis
	float valor_compra, prestacao;
	
	//Entrada de dados - Informa o valor da compra
	printf("INSIRA O VALOR DA COMPRA PARA VERIFICAR VALOR DE UMA DAS 5 PRESTACOES: ");	
	scanf("%f", &valor_compra);
	
	//Processamento - divide o valor total em 5 presta��es
	prestacao = valor_compra / 5;
	
	//Sa�da de dados - informa uma presta��o
	printf("\nVALOR DE UMA PRESTACAO: R$%.2f", prestacao);
	
	return	0;
}
