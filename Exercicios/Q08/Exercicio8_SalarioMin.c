/*8. Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo.
Calcule e imprima quantos sal�rios m�nimos ganha esse funcion�rio.*/
#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    float salario_funcionario, salario_min = 0, calculo = 0;
	
	//Entrada de dados - Informa o valor do sal�rio m�nimo
    printf("INSIRA O VALOR DO SALARIO MINIMO ATUAL: ");
    scanf("%f", &salario_min);

    printf("INSIRA O VALOR DO SEU SALARIO: ");
    scanf("%f", &salario_funcionario);
	
	//Processamento - Calculo da quantidade de salarios recebidos
    calculo = salario_funcionario/salario_min;
	
	//Saida de dados - Informa quantidade de sal�rios
	printf("\nVOCE RECEBE %.0f SALARIO(S) MINIMO(S)", calculo);

    return 0;
}
