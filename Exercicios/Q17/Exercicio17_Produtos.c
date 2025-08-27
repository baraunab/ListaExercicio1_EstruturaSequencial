/*17. Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3.
O valor total deve ser apresentado no final da execução do programa.*/
#include <stdio.h>

int main(){
	//Declaração de variáveis
    int quantidade1, valor1, quantidade2, valor2, quantidade3, valor3, formula_total;
    
    //Entrada de dados - Informa quantidade e valores dos produtos
    printf("INFORME A PRIMEIRA QUANTIDADE: ");
    scanf("%d", &quantidade1);

    printf("INFORMA O PRIMEIRO VALOR: ");
    scanf("%d", &valor1);

    printf("INFORME A SEGUNDA QUANTIDADE: ");
    scanf("%d", &quantidade2);

    printf("INFORMA O SEGUNDO VALOR: ");
    scanf("%d", &valor2);

    printf("INFORME A TERCEIRA QUANTIDADE: ");
    scanf("%d", &quantidade3);

    printf("INFORMA O TERCEIRO VALOR: ");
    scanf("%d", &valor3);

	//Processamento - calcula o valor total
    formula_total = (quantidade1* valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
	
	//Saída de dados - Informa o valor calculado
    printf("\nRESULTADO FINAL: (%d * %d) + (%d * %d) + (%d * %d) = %d", quantidade1, valor1, quantidade2, valor2, quantidade3, valor3, formula_total);

    return 0;
}
