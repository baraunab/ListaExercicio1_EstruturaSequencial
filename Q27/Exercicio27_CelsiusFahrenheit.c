/*27. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main (){
	float celsius, fahrenheit;
	
	printf("INSIRA UMA TEMPERATURA EM GRAUS CELSIUS: ");
	scanf("%f", &celsius);
	
	fahrenheit = ((9 * celsius) + 160) / 5;
	
	printf("\nTEMPERATURA EM CELSIUS: %.2f °C \nTEMPERATURA EM FAHRENHEIT: %.2f °F", celsius, fahrenheit);
	
	return 0;
}
