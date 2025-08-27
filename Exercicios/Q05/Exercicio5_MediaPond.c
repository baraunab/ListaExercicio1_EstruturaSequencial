/*5. Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a média ponderada dessas notas.*/

#include <stdio.h>

int main(){
	//Declaração de variáveis
    float n1, n2, media_ponderada = 0;
    int  p1, p2;
	
	//Entrada de dados - Infoma 2 notas e seus pesos
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira o peso da primeira nota: ");
    scanf("%d", &p1);

    printf("\nInsira a segunda nota: ");
    scanf("%f", &n2);

    printf("Insira o peso da segunda nota: ");
    scanf("%d", &p2);
	
	//Processamento - Calcula a média ponderada
    media_ponderada = (n1*p1+n2*p2)/(p1+p2);
	
	//Saída de dados - Informa as notas, seus pesos e a média ponderada 
    printf ("\nPRIMEIRA NOTA: %.2f - PESO: %d \nSEGUNDA NOTA: %.2f - PESO: %d \nMEDIA PONDERADA FINAL: %.2f", n1, p1, n2, p2, media_ponderada);

    return 0;
}
