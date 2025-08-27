/*13. Sabe-se que o kilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a um algoritmo que
receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia. 
Calcule e imprima:
    - o valor, em reais, de cada kilowatt;
    - o valor, em reais, a ser pago por essa resid�ncia;
    - o novo valor a ser pago por essa resid�ncia, a partir de um desconto de 15%.*/
    
#include <stdio.h>
    
int main (){
	//Declara��o de vari�veis
    float salario_minimo, qtd_quilowatts, valor_quillowatt, valor_residencia, valor_residencia_desc;
	
	//Entrada de dados - Informa salario e quantidade de quilowatts 
	printf("INFORME O SALARIO MINIMO: R$");
	scanf("%f", &salario_minimo);
	
	printf("INFORMA A QUANTIDADE DE QUILOWATTS GASTA EM SUA RESIDENCIA: ");
	scanf("%f", &qtd_quilowatts);
	
	//Processamento de dados
	//Custo de quilowatts
	valor_quillowatt = 0.2 * salario_minimo;
	
	//Valor pago pela residencia
	valor_residencia = qtd_quilowatts * valor_quillowatt;
	
	//Valor com desconto pago pela residencia
	valor_residencia_desc = 0.15 * valor_residencia;
	
	//Saida de dados - Imprime resultados calculados
	printf("\nVALOR DOS QUILOWATTS: R$%.2f \nVALOR PAGO PELA RESIDENCIA: R$%.2f \nVALOR COM DESCONTO: R$%.2f", 
			valor_quillowatt, valor_residencia, valor_residencia_desc);
	
	return 0;
	
	
	
}
