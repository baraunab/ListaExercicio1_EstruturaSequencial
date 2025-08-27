/*8. Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo.
Calcule e imprima quantos salários mínimos ganha esse funcionário.*/
#include <stdio.h>

int main(){
	//Declaração de variáveis
    float salario_funcionario, salario_min = 0, calculo = 0;
	
	//Entrada de dados - Informa o valor do salário mínimo
    printf("INSIRA O VALOR DO SALARIO MINIMO ATUAL: ");
    scanf("%f", &salario_min);

    printf("INSIRA O VALOR DO SEU SALARIO: ");
    scanf("%f", &salario_funcionario);
	
	//Processamento - Calculo da quantidade de salarios recebidos
    calculo = salario_funcionario/salario_min;
	
	//Saida de dados - Informa quantidade de salários
	printf("\nVOCE RECEBE %.0f SALARIO(S) MINIMO(S)", calculo);

    return 0;
}
