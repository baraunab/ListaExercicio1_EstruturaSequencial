/*21. Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.*/

#include <stdio.h>

int main(){
    float produtos[4];
    float pagamento, valor_total = 0, troco;
    
    for(int i = 0; i < 5; i++){
        printf("INSIRA O VALOR DO PRODUTO %d: ", i+1);
        scanf("%f", &produtos[i]);
        valor_total += produtos[i];
    }
    
    printf("\n\nVALOR TOTAL: R$ %.2f\nINFORME O VALOR REFERENTE AO PAGAMENTO: ", valor_total);
    scanf("%f", &pagamento);
    
    
    printf("\n----- NOTA FISCAL -----\n\n");
    
    for(int i = 0; i < 5; i++){
    	printf("PRODUTO %i: R$%.2f\n", i+1, produtos[i]);
	}
	printf("\n--- --- --- --- ---\nVALOR TOTAL: R$ %.2f", valor_total);
    
    if(pagamento > valor_total){
    	printf("\nVALOR PAGO: R$%.2f", pagamento);
    	troco = pagamento - valor_total;
    	printf("\nTROCO: R$%.2f \n\nPAGAMENTO CONCLUIDO!", troco);
    	
	} else if(pagamento < valor_total){
		printf("\nVALOR INSUFICIENTE!");
	} else {
		printf("\nVALOR PAGO: R$%.2f", pagamento);
		printf("\nPAGAMENTO CONCLUIDO!");
	}
	
	printf("\n\n----- NOTA FISCAL -----\n");
	
	return 0;	
}
