/*24. Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é:
	- Valor acumulado = (P*(1 +i)^n – 1)/i em que 
	- i = taxa, 
	- P = aplicação mensal e 
	- n = número de meses.*/

#include <stdio.h>
#include <math.h>

int main (){
	float valor_acumulado, taxa, taxa_simp, meses, aplicacao_mensal;
	
	printf("INFORME O VALOR DA APLICACAO MENSAL: ");
	scanf("%f", &aplicacao_mensal);
	
	printf("INFORME A TAXA APLICADA: ");
	scanf("%f", &taxa);
	
	printf("INFORME O NUMERO DE MESES: ");
	scanf("%f", &meses);
	
	taxa_simp = pow((1+taxa), meses);
	
	valor_acumulado = (aplicacao_mensal * taxa_simp - 1) / meses;
	
	printf("\ntaxa simples: %.2f \n\n\APLICACAO MENSAL: R$%.2f \n- SEU RENDIMENTO SERA: R$%.2f", taxa_simp, aplicacao_mensal, valor_acumulado);
	
	return 0;
}

