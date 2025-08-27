/*27. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float celsius, fahrenheit;
	
	//Entrada de dados - Informa a temperatura em celsius
	printf("INSIRA UMA TEMPERATURA EM GRAUS CELSIUS: ");
	scanf("%f", &celsius);
	
	//Processamento - conversão de celsius para fahrenheit
	fahrenheit = ((9 * celsius) + 160) / 5;
	
	//Saída de dados - Imprime as temperaturas
	printf("\nTEMPERATURA EM CELSIUS: %.2f °C \nTEMPERATURA EM FAHRENHEIT: %.2f °F", celsius, fahrenheit);
	
	return 0;
}
