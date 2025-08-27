/*33. Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
subir para atingir seu objetivo.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float altura_degrau, altura_total, quantidade_degraus;
	
	//Entrada de dados - informa altura de um degrau e a altura a ser atingida 
	printf("INFORME A ALTURA DE UM UNICO DEGRAU: ");
	scanf("%f", &altura_degrau);
	
	printf("INFORME QUAL A ALTURA A SER ATINGIDA: ");
	scanf("%f", &altura_total);
	
	//Processamento - Calcula a quantidade de degraus usada na escada
	quantidade_degraus = altura_total / altura_degrau;
	
	//Saída de dados - Imprime quantidade de degraus
	printf("\nPARA ALCANCAR %.2f m, SERAO NECESSARIOS %.2f DEGRAUS.", altura_total, quantidade_degraus); 
	
	return 0;
}
