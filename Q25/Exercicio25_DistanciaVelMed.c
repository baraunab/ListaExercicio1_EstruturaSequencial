/*25. Fa�a um algoritmo que ap�s a entrada de uma determinada dist�ncia entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo m�dio que levar� para chegada a esse local e
qual a velocidade em metros/segundo.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float distancia, velocidade, tempo_percorrido;

	//Entrada de dados - informa a distancia e velocidade percorrida
	printf("INSIRA A DISTANCIA PERCORRIDA: ");
	scanf("%f", &distancia);
	
	printf("INFORME A VELOCIDADE MEDIA: ");
	scanf("%f", &velocidade);
	
	//Processamento - converte os dados informados e calcula a velocidade media
	tempo_percorrido = (distancia * 1000) / (velocidade / 3.6);
	
	//Saida de dados - informa o tempo percorrido em m/s
	printf("Tempo percorrido: %.2f m/s", tempo_percorrido);
	
	return 0;
}
