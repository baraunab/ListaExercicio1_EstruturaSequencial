/*37. Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem,
utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia
percorrida (dist�ncia = tempo * velocidade).*/

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
