/*2. Fa�a um algoritmo que receba dois n�meros reais, calcule e imprima a subtra��o do primeiro n�mero pelo segundo.*/

#include <stdio.h>

int main (){
    //DECLARA��O DE VARI�VEIS
    float x, y, resultado = 0;
    
    //ENTRADA DE DADOS - INFORMA DOIS VALORES
    printf ("INSIRA O PRIMEIRO VALOR: ");
    scanf("%f", &x);
    printf ("INSIRA O SEGUNDO VALOR: ");
    scanf("%f", &y);
    
    //PROCESSAMENTO - SUBTRAI DOIS VALORES
    resultado = x - y;
    
	//SAIDA DE DADOS - IMPRIME O SUBTRACAO
    printf("A DIFERENCA ENTRE %.2f E %.2f EH: %.2f", x, y, resultado);
    return 0;

}
