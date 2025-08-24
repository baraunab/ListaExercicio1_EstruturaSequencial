/*16. Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa,
e os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
um após o outro, o outro nome (o segundo) será impresso na segunda linha.*/
#include <stdio.h>
#include <string.h>

int main(){

   char string[50] = "Hello world";
   printf( "Original string: %s\n", string ); //printing the string
  
   // Extract the first token
   char * token = strtok(string, " ");
   
   printf( " %s\n", token ); //printing the token
   printf( "String after strtok(): %s\n\n --------------", string ); //printing the string
   
   char nome[199];
   printf("INSIRA SEU NOME: ");
   scanf ("%[^\n]%*c", nome);
	
	      char * token1 = strtok(nome, " ");

      // loop through the string to extract all other tokens
      while( token1 != NULL ) {
         printf( " %s\n", token1 ); //printing each token
         token1 = strtok(NULL, " ");
      }
   
   return 0;
}


