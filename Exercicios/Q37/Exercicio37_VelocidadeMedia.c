/*37. Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem,
utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia
percorrida (dist�ncia = tempo * velocidade).*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float tempo_gasto, velocidade_media, distancia, combustivel;
	
	//Entrada de dados - informa o tempo e velocidade 
	printf("INFORME O TEMPO GASTO NA VIAGEM: ");
	scanf("%f", &tempo_gasto);
	
	printf("INSIRA A VELOCIDADE MEDIA: ");
	scanf("%f", &velocidade_media);
	
	//Processamento - Calcula distancia e combustivel gasto
	distancia = tempo_gasto * velocidade_media;
	
	combustivel = distancia / 12;
	
	//Sa�da de dados - informa valores calculados
	printf("\nDISTANCIA PERCORRIDA: %.2f Km \nCOMBUSTIVEL GASTO: %.2f l", distancia, combustivel);
	
	return 0;
}
