/*35. Um hotel deseja fazer uma promo��o especial de final de semana, concedendo um desconto de
25% na di�ria. Sendo informados, atrav�s do teclado, o n�mero de apartamentos do hotel e o valor da
di�ria por apartamento para o final de semana completo, elabore um programa para calcular:
	- Valor promocional da di�ria;
	- Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 100%;
	- Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 70%;
	- Valor que o hotel deixar� de arrecadar em virtude da promo��o, caso a ocupa��o atinja 100%.*/
	
#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float numero_apartamento, valor_diaria, valor_promocional, valor_arrecadado_100, valor_arrecadado_70, valor_perdido;
	
	//Entrada de dados - informa o numero de apartamentos e valor da diaria
	printf("INFORME O NUMERO DE APARTAMENTOS: ");
	scanf("%f", &numero_apartamento);
	
	printf("INFORME O VALOR DA DIARIA: ");
	scanf("%f", &valor_diaria);
	
	//Processamento - calcula o valor da diaria promocional, valores arrecadados e valor perdido
	valor_promocional = valor_diaria - (0.25 * valor_diaria);
	
	valor_arrecadado_100 = valor_promocional * numero_apartamento;
	
	valor_arrecadado_70 = valor_promocional * (numero_apartamento * 0.7);
	
	valor_perdido = (valor_diaria * numero_apartamento) - valor_arrecadado_100;
	
	//Sa�da de dados - informa os valores calculados
	printf ("\nVALOR DA DIARIA: R$%.2f \nVALOR PROMOCIONAL: R$%.2f", valor_diaria, valor_promocional);
	printf("\nVALOR ARRECADADO COM 100%% DE OCUPACAO: R$%.2f\nVALOR ARRECADADO COM 70%% DE OCUPACAO: R$%.2f \nVALOR PERDIDO: R$%.2f", 
			valor_arrecadado_100, valor_arrecadado_70, valor_perdido);
	
	return 0;
}
