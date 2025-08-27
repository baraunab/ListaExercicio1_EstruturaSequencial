/*26. Um sistema de equa��es lineares da forma ax + by = c, pode ser resolvido utilizando-se as
seguintes f�rmulas:
	y = af - cd / ae - bd
	x = ce - bf / ae - bd
Fa�a um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equa��es e calcular e 
exibir os valores de x e y.*/
#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	int a, b, c, d, e, f, x, y;
	
	//Entrada de dados - informa os valores dos coeficientes
	printf("INSIRA O VALOR DE A: ");
	scanf("%d", &a);
	
	printf("INSIRA O VALOR DE B: ");
	scanf("%d", &b);
	
	printf("INSIRA O VALOR DE C: ");
	scanf("%d", &c);
	
	printf("INSIRA O VALOR DE D: ");
	scanf("%d", &d);
	
	printf("INSIRA O VALOR DE E: ");
	scanf("%d", &e);
	
	printf("INSIRA O VALOR DE F: ");
	scanf("%d", &f);
	
	//Processamento - calcula as equa��es
	x = (c*e) - (b*f) / (a*e) - (b*d);
	y = (a*f) - (c*d) / (a*e) - (b*d);
	
	//Sa�da de dados - Imprime o valor das equa��es
	printf("x = %d * %d - %d * %d / %d * %d - %d * %d = %d\n", c, e, b, f, a, e, b, d);
	printf("y = %d * %d - %d * %d / %d * %d - %d * %d = %d", a, f, c, d, a, e, b, d);

	return 0;	
}
