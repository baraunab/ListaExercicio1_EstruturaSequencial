/*32. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    - A idade dessa pessoa;
	- Quantos anos ela terá em 2028.*/
	
#include <stdio.h>

int main (){
	int ano_nascimento, ano_atual, idade;
	
	printf("INFORME SEU ANO DE NASCIMENTO: ");
	scanf ("%d", &ano_nascimento);
	
	printf("INFORME O ANO ATUAL: ");
	scanf("%d", &ano_atual);
	
	idade = ano_atual - ano_nascimento;
	
	printf("\nSUA IDADE: %d ANOS", idade);
	
	idade = 2028 - ano_nascimento;
	
	printf("\nSUA IDADE EM 2028: %d ANOS", idade);	
	
}
