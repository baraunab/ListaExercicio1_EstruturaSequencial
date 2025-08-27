/*20. Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float comprimento, largura, profundidade, area, valor_construcao;
	
	//Entrada de dados - informa dimensões da piscina
	printf("INFORME O COMPRIMENTO DA PISCINA: ");
	scanf("%f", &comprimento);
	
	printf("INFORME A LARGURA: ");
	scanf("%f", &largura);
	
	printf("INFORME A PROFUNDIDADE: ");
	scanf("%f", &profundidade);
	
	//Processamento - calcula a area da piscina e o valor da construcao
	area = (comprimento * largura) * profundidade;
	
	valor_construcao = area * 45;
	
	//Saida de dados - Imprime o valor da construção
	printf("\nVALOR DA CONSTRUCAO: %.2f", valor_construcao); 
	
	return 0;
}
