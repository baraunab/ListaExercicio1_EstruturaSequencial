/*25. Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
qual a velocidade em metros/segundo.*/

#include <stdio.h>

int main(){
	//Declaração de variáveis
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
