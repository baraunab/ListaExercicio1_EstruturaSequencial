/*16. Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa,
e os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.*/
#include <stdio.h>
#include <string.h>

int main(){
	
	//Declara��o de vari�veis
	char nome1[100];
	char sobrenome1[100];
	char ultimonome1[100];
	 
	char nome2[100];
	char sobrenome2[100];
	char ultimonome2[100];
	
	char nome3[100];
	char sobrenome3[100];
	char ultimonome3[100];
	
	//Entrada de dados - Informa 3 nomes diferentes
	printf("INSIRA TRES NOMES A SEGUIR SEPARADO POR NOME, SOBRENOME E ULTIMO NOME\n");
	
	printf("\nNome: ");
	scanf("%s", &nome1);
	
	printf("Sobrenome: ");
	scanf("%s", &sobrenome1);
	
	printf("Ultimo nome: ");
	scanf("%s", &ultimonome1);
	
	printf("\n--- SEGUNDO NOME ---\n");

	printf("\nNome: ");
	scanf("%s", &nome2);
	
	printf("Sobrenome: ");
	scanf("%s", &sobrenome2);
	
	printf("Ultimo nome: ");
	scanf("%s", &ultimonome2);
	
	printf("\n--- TERCEIRO NOME ---\n");

	printf("\nNome: ");
	scanf("%s", &nome3);
	
	printf("Sobrenome: ");
	scanf("%s", &sobrenome3);
	
	printf("Ultimo nome: ");
	scanf("%s", &ultimonome3);
	
	//Sa�da de dados - exibe somente nome e sobrenome
	printf("\n--------------\n\nNOMES: %s | %s | %s \nSOBRENOMES: %s | %s | %s", 
			nome1, nome2, nome3, sobrenome1, sobrenome2, sobrenome3);
	
	
   
   return 0;
}


