/*8. Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo.
Calcule e imprima quantos sal�rios m�nimos ganha esse funcion�rio.*/
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
