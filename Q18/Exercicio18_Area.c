/*18. Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente.*/

int main(){
    float largura, comprimento, area;

    printf("INFORME A LARGURA DA AREA: ");
    scanf("%f", largura);

    printf("INFORME O COMPRIMENTO: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("AREA = %.2f", &area);

    return 0;
}
