/*27. Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de
convers�o �: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float celsius, fahrenheit;
	
	//Entrada de dados - Informa a temperatura em celsius
	printf("INSIRA UMA TEMPERATURA EM GRAUS CELSIUS: ");
	scanf("%f", &celsius);
	
	//Processamento - convers�o de celsius para fahrenheit
	fahrenheit = ((9 * celsius) + 160) / 5;
	
	//Sa�da de dados - Imprime as temperaturas
	printf("\nTEMPERATURA EM CELSIUS: %.2f �C \nTEMPERATURA EM FAHRENHEIT: %.2f �F", celsius, fahrenheit);
	
	return 0;
}
