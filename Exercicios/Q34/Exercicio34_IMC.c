/*34. Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o �ndice de massa
corp�rea. Ele mede a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).*/
#include <stdio.h>
#include <math.h>

int main (){
	//Declara��o de vari�veis
	float peso, altura, imc = 0;
	
	//Entrada de dados - informa peso e altura
	printf("INSIRA SEU PESO: ");
	scanf("%f", &peso);
	
	printf("INFORME SUA ALTURA: ");
	scanf("%f", &altura);
	
	//Processamento - calcula o imc
	imc = peso / (pow(altura, 2));
		
	//Sa�da de dados - infoma o imc
	printf("\nSEU IMC: %.2f", imc);
	
}
