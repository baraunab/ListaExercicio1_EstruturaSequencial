/*3. Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número pelo segundo.*/

#include <stdio.h>

int main (){
    //DECLARAÇÃO DE VARIÁVEIS
    int x, y, divisao = 0;
    //ENTRADA DE DADOS
    printf ("INSIRA O PRIMEIRO VALOR: ");
    scanf("%d", &x);
    printf ("INSIRA O SEGUNDO VALOR: ");
    scanf("%d", &y);
    //PROCESSAMENTO
    divisao = x / y;
    //SAIDA DE DADOS
    printf("O QUOCIENTE EH: %d", divisao);
    return 0;

}
