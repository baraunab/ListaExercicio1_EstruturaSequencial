/*19. Crie um programa que receba valores quaisquer e mostre a m�dia entre eles, o somat�rio entre eles
e o resto da divis�o do somat�rio por cada um dos valores.*/

#include <stdio.h>
#include <math.h>

int main(){
	//Declara��o de vari�veis
    float n1, n2, media, soma, resto_divisao_soma_n1, resto_divisao_soma_n2;

	//Entrada de dados - Informa dois numeros
    printf("INSIRA O PRIMEIRO NUMERO: ");
    scanf("%f", &n1);

    printf("INSIRA O SEGUNDO NUMERO: ");
    scanf("%f", &n2);

	//Processamento - Calcula m�dia, soma, e resto de divis�es
    //MEDIA
    media = (n1 + n2) / 2;

    //SOMA
    soma = n1 + n2;

    //RESTO DA DIVISAO DA SOMATORIA
    resto_divisao_soma_n1 = fmod(soma, n1);

    resto_divisao_soma_n2 = fmod(soma, n2);

	//Sa�da de dados - Imprime os valores calculados
    printf("\nMEDIA = %.2f \nSOMA = %.2f \nRESTO DA DIVISAO POR %.2f = %.2f \nRESTO DA DIVISAO POR %.2f = %.2f",
            media, soma, n1, resto_divisao_soma_n1, n2, resto_divisao_soma_n2);

    return 0;

}
