/*33. Cada degrau de uma escada tem uma altura X. Fa�a um algoritmo que receba essa altura e a altura
que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever�
subir para atingir seu objetivo.*/

#include <stdio.h>

int main (){
	float altura_degrau, altura_total, quantidade_degraus;
	
	printf("INFORME A ALTURA DE UM UNICO DEGRAU: ");
	scanf("%f", &altura_degrau);
	
	printf("INFORME QUAL A ALTURA A SER ATINGIDA: ");
	scanf("%f", &altura_total);
	
	quantidade_degraus = altura_total / altura_degrau;
	
	printf("\nPARA ALCANCAR %.2f m, SERAO NECESSARIOS %.2f DEGRAUS.", altura_total, quantidade_degraus); 
	
	return 0;
}
