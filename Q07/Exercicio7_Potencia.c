/*7. Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.*/

#include <stdio.h>
#include <math.h>

int main(){
	//Declaração de variáveis
    int base, expoente, calculo=0;
	
	//Entrada de dados - Informa a base e expoente da potencia
    printf("INSIRA A BASE DA POTENCIA: ");
    scanf("%d", &base);

    printf("INSIRA O EXPOENTE DA POTENCIA: ");
    scanf("%d", &expoente);
	
	//Processamento - calcula a potencia
    calculo = pow(base, expoente);
	
	//Saida de dados - imprime o resultado da potencia
    printf("%d ^ %d = %d", base, expoente, calculo);

    return 0;
}

