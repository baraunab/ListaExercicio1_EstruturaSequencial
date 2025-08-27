/*2. Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número pelo segundo.*/

#include <stdio.h>

int main (){
    //DECLARAÇÃO DE VARIÁVEIS
    float x, y, resultado = 0;
    
    //ENTRADA DE DADOS - INFORMA DOIS VALORES
    printf ("INSIRA O PRIMEIRO VALOR: ");
    scanf("%f", &x);
    printf ("INSIRA O SEGUNDO VALOR: ");
    scanf("%f", &y);
    
    //PROCESSAMENTO - SUBTRAI DOIS VALORES
    resultado = x - y;
    
	//SAIDA DE DADOS - IMPRIME O SUBTRACAO
    printf("A DIFERENCA ENTRE %f E %f EH: %f", x, y, resultado);
    return 0;

}
