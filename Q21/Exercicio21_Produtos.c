/*21. Entrar via teclado com o valor de cinco produtos. Ap�s as entradas, digitar um valor referente ao
pagamento da somat�ria destes valores. Calcular e exibir o troco que dever� ser devolvido.*/

#include <stdio.h>

int main(){
    float produto1, produto2, produto3, produto4, produto5;
    float pagamento, valor_total = 0, troco;
    
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
    
    valor_total = produto1 + produto2 + produto3 + produto4 + produto5;
   	troco = pagamento - valor_total;

    printf("\n\nVALOR TOTAL: R$ %.2f\nINFORME O VALOR REFERENTE AO PAGAMENTO: ", valor_total);
    scanf("%f", &pagamento);

    printf("\n\n----- NOTA FISCAL -----\n\n");
    
    printf("PRODUTO 1: R$%.2f\n", produto1);
    printf("PRODUTO 2: R$%.2f\n", produto2);
    printf("PRODUTO 3: R$%.2f\n", produto3);
    printf("PRODUTO 4: R$%.2f\n", produto4);
    printf("PRODUTO 5: R$%.2f", produto5);
    
    printf("\n--- --- --- --- ---\nVALOR TOTAL: R$ %.2f\nVALOR PAGO: %.2f", valor_total, pagamento);

    troco = pagamento - valor_total;
    printf("\nTROCO: R$%.2f \n\nPAGAMENTO CONCLUIDO!", troco);
    	
 	printf("\n\n----- NOTA FISCAL -----\n");

	return 0;	
}
