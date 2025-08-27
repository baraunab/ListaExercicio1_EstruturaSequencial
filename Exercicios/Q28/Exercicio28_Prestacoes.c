/*28. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. ]
Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações*/

#include <stdio.h>
int main (){
	//Declaração de variáveis
	float valor_compra, prestacao;
	
	//Entrada de dados - Informa o valor da compra
	printf("INSIRA O VALOR DA COMPRA PARA VERIFICAR VALOR DE UMA DAS 5 PRESTACOES: ");	
	scanf("%f", &valor_compra);
	
	//Processamento - divide o valor total em 5 prestações
	prestacao = valor_compra / 5;
	
	//Saída de dados - informa uma prestação
	printf("\nVALOR DE UMA PRESTACAO: R$%.2f", prestacao);
	
	return	0;
}
