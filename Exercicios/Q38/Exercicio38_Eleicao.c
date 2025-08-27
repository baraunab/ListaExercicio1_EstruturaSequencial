/*38. Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
e o percentual de votos nulos.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float numero_eleitores, votos_candidato1, votos_candidato2, percentual_cand1, percentual_cand2, percentual_nulos;
	
	//Entrada de dados - informa quantidade de eleitores e votos nos candidatos
	printf("INFORME A QUANTIDADE DE ELEITORES: ");
	scanf("%f", &numero_eleitores);
	
	printf("INFORME OS VOTOS NO CANDIDATO 1: ");
	scanf("%f", &votos_candidato1);
	
	printf("INFORME OS VOTOS NO CANDIDATO 2: ");
	scanf("%f", &votos_candidato2);
	
	//Processamento - calcula percentual de votos nos candidatos e votos nulos
	percentual_cand1 = (votos_candidato1 / numero_eleitores) * 100;
	percentual_cand2 = (votos_candidato2 / numero_eleitores) * 100;
	percentual_nulos = 100 - (percentual_cand1 + percentual_cand2);
	
	//Saída de dados - informa os perceituais de votos
	printf("\nCANDIDATO 1: %.1f%%\nCANDIDATO 2: %.1f%% \nVOTOS NULOS: %.1f%%", percentual_cand1, percentual_cand2, percentual_nulos);
	
	return 0;
}
