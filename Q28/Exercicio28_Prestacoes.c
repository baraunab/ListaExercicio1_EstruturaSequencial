/*28. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. ]
Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações*/

#include <stdio.h>
int main (){
	float valor_compra, prestacao;
	
	printf("INSIRA O VALOR DA COMPRA PARA VERIFICAR VALOR DE UMA DAS 5 PRESTACOES: ");	
	scanf("%f", &valor_compra);
	
	prestacao = valor_compra / 5;
	
	printf("\nVALOR DE UMA PRESTACAO: R$%.2f", prestacao);
	
	return	0;
}
