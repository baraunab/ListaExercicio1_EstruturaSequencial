/*15. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual.
Calcule e imprima:
   - a idade dessa pessoa;
   - essa idade convertida em semanas.*/


#include <stdio.h>

int main(){
	//Declaração de variáveis
    int ano_nasc, ano_atual, idade=0, idade_semanas=0;
    
    //Entrada de dados - Informa ano de nascimento e ano atual
    printf("INSIRA SEU ANO DE NASCIMENTO: ");
    scanf("%d", &ano_nasc);

    printf("INSIRA O ANO ATUAL: ");
    scanf("%d", &ano_atual);
	
	//Processamento - calcula idade e converte em semanas
    idade = ano_atual - ano_nasc;
    idade_semanas = idade * 52143;
	
	//Saida de dados - Informa a idade em semanas
    printf("\nSUA IDADE E %d \nSUA IDADE EM SEMANAS E DE APROXIMADAMENTE %d SEMANAS", idade, idade_semanas);

    return 0;
}
