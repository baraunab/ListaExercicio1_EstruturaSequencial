/*8. Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo.
Calcule e imprima quantos salários mínimos ganha esse funcionário.*/
#include <stdio.h>
#include <math.h>

int main(){
    float salario_funcionario, salario_min = 0, calculo = 0;

    printf("INSIRA O VALOR DO SALARIO MINIMO ATUAL: ");
    scanf("%f", &salario_min);

    printf("INSIRA O VALOR DO SEU SALARIO: ");
    scanf("%f", &salario_funcionario);

    calculo = salario_funcionario/salario_min;

	printf("\nVOCE RECEBE %.0f SALARIO(S) MINIMO(S)", calculo);

    return 0;
}
