/*24. Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
Sabendo-se que a f�rmula usada para este c�lculo �:
	- Valor acumulado = (P*(1 +i)^n � 1)/i em que 
	- i = taxa, 
	- P = aplica��o mensal e 
	- n = n�mero de meses.*/

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

