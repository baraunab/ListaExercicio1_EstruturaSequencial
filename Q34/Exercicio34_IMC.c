/*34. Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o �ndice de massa
corp�rea. Ele mede a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).*/
#include <stdio.h>
#include <math.h>

int main (){
	
	float peso, altura, imc = 0;
	
	printf("INSIRA SEU PESO: ");
	scanf("%f", &peso);
	
	printf("INFORME SUA ALTURA: ");
	scanf("%f", &altura);
	
	imc = peso / (pow(altura, 2));
		
	printf("\nSEU IMC: %.2f", imc);
	
}
