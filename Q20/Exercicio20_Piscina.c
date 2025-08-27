/*20. Uma determinada pessoa que trabalha com constru��o de piscinas precisa de um programa que
calcule o valor das constru��es solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser constru�da. Leve em considera��o que o
valor da constru��o � cobrado por m3 de �gua que a piscina conter� e o pre�o � de R$ 45.00 por m3.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float comprimento, largura, profundidade, area, valor_construcao;
	
	//Entrada de dados - informa dimens�es da piscina
	printf("INFORME O COMPRIMENTO DA PISCINA: ");
	scanf("%f", &comprimento);
	
	printf("INFORME A LARGURA: ");
	scanf("%f", &largura);
	
	printf("INFORME A PROFUNDIDADE: ");
	scanf("%f", &profundidade);
	
	//Processamento - calcula a area da piscina e o valor da construcao
	area = (comprimento * largura) * profundidade;
	
	valor_construcao = area * 45;
	
	//Saida de dados - Imprime o valor da constru��o
	printf("\nVALOR DA CONSTRUCAO: %.2f", valor_construcao); 
	
	return 0;
}
