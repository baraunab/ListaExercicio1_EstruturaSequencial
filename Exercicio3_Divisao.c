/*3. Fa�a um algoritmo que receba dois n�meros inteiros, calcule e imprima a divis�o do primeiro n�mero pelo segundo.*/

#include <stdio.h>

int main (){
    //DECLARA��O DE VARI�VEIS
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
