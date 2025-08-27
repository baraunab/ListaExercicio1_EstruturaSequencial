/*32. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    - A idade dessa pessoa;
	- Quantos anos ela terá em 2028.*/
	
#include <stdio.h>

int main (){
	//Declaração de variáveis
	int ano_nascimento, ano_atual, idade;
	
	//Entrada de dados - informa o ano de nascimento e atual
	printf("INFORME SEU ANO DE NASCIMENTO: ");
	scanf ("%d", &ano_nascimento);
	
	printf("INFORME O ANO ATUAL: ");
	scanf("%d", &ano_atual);
	
	//Processamento 1 - calcula a idade atual
	idade = ano_atual - ano_nascimento;
	
	//Saída de dados 2 - informa a idade atual
	printf("\nSUA IDADE: %d ANOS", idade);
	
	//Processamento 2 - calcula a idade em 2028
	idade = 2028 - ano_nascimento;
	
	//Saída de dados - informa a idade em 2028
	printf("\nSUA IDADE EM 2028: %d ANOS", idade);	
	
}
