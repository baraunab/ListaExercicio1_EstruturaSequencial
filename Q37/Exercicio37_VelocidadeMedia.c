/*37. Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
percorrida (distância = tempo * velocidade).*/

#include <stdio.h>

int main (){
	float tempo_gasto, velocidade_media, distancia, combustivel;
	
	printf("INFORME O TEMPO GASTO NA VIAGEM: ");
	scanf("%f", &tempo_gasto);
	
	printf("INSIRA A VELOCIDADE MEDIA: ");
	scanf("%f", &velocidade_media);
	
	distancia = tempo_gasto * velocidade_media;
	
	combustivel = distancia / 12;
	
	printf("\nDISTANCIA PERCORRIDA: %.2f Km \nCOMBUSTIVEL GASTO: %.2f l", distancia, combustivel);
	
	
	
	return 0;
}
