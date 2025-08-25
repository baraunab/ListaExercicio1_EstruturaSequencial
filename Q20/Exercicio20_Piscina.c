/*20. Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3.*/

#include <stdio.h>

int main (){
	float comprimento, largura, profundidade, area, valor_construcao;
	
	printf("INFORME O COMPRIMENTO DA PISCINA: ");
	scanf("%f", &comprimento);
	
	printf("INFORME A LARGURA: ");
	scanf("%f", &largura);
	
	printf("INFORME A PROFUNDIDADE: ");
	scanf("%f", &profundidade);
	
	area = (comprimento * largura) * profundidade;
	
	valor_construcao = area * 45;
	
	printf("\nVALOR DA CONSTRUCAO: %.2f", valor_construcao); 
	
	return 0;
}
