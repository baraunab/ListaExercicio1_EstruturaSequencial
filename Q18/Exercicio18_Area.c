/*18. Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente.*/

int main(){
	//Declaração de variáveis
    float largura, comprimento, area;
	
	//Entrada de dados - informa a largura e comprimento do lote
    printf("INFORME A LARGURA DA AREA: ");
    scanf("%f", &largura);

    printf("INFORME O COMPRIMENTO: ");
    scanf("%f", &comprimento);
	
	//Processamento - Calcula area
    area = largura * comprimento;
	
	//Saida de dados - Informa a area
    printf("AREA = %.2f m", area);

    return 0;
}
