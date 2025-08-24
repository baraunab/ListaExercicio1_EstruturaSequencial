/*22. Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que
A fique com o valor de B, B fique com o valor de C e C fique com o valor de A.*/

#include <stdio.h>
int main (){
    int A = 1, B = 2, C = 3, D = 0;

    printf ("A = %d \nB = %d\nC = %d\n \n", A, B, C);

    D = A;

    A = B;

    B = C;

    C = D;

    printf("--- NOVOS VALORES ---\nA = %d \nB = %d \nC = %d", A, B, C);

    return 0;


}
