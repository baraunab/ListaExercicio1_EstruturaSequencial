/*21. Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.*/

#include <stdio.h>

int main(){
	//Declaração de variáveis
    float produto1, produto2, produto3, produto4, produto5;
    float pagamento, valor_total = 0, troco;
    
    //Entrada de dados - informa o vaor dos produtos;
    printf("INSIRA O VALOR DO PRODUTO 1: ");
    scanf("%f", &produto1);
    
    printf("INSIRA O VALOR DO PRODUTO 2: ");
    scanf("%f", &produto2);

    printf("INSIRA O VALOR DO PRODUTO 3: ");
    scanf("%f", &produto3);

    printf("INSIRA O VALOR DO PRODUTO 4: ");
    scanf("%f", &produto4);

    printf("INSIRA O VALOR DO PRODUTO 5: ");
    scanf("%f", &produto5);
    
    //Processamento - calcula o preço total e o troco
    valor_total = produto1 + produto2 + produto3 + produto4 + produto5;
   	troco = pagamento - valor_total;

    printf("\n\nVALOR TOTAL: R$ %.2f\nINFORME O VALOR REFERENTE AO PAGAMENTO: ", valor_total);
    scanf("%f", &pagamento);
	
	//Saída de dados - exibe os produtos, seus preços e o troco
    printf("\n\n----- NOTA FISCAL -----\n\n");
    
    printf("PRODUTO 1: R$%.2f\n", produto1);
    printf("PRODUTO 2: R$%.2f\n", produto2);
    printf("PRODUTO 3: R$%.2f\n", produto3);
    printf("PRODUTO 4: R$%.2f\n", produto4);
    printf("PRODUTO 5: R$%.2f", produto5);
    
    printf("\n--- --- --- --- ---\nVALOR TOTAL: R$ %.2f\nVALOR PAGO: %.2f", valor_total, pagamento);

    printf("\nTROCO: R$%.2f \n\nPAGAMENTO CONCLUIDO!", troco);
    	
 	printf("\n\n----- NOTA FISCAL -----\n");

	return 0;	
}
