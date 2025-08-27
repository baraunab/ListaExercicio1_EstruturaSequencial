/*9. Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
     - triângulo; quadrado; círculo; trapézio; retângulo; losango.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
    float base_triangulo, altura_triangulo, area_triangulo;
    float lado_quadrado, area_quadrado;
    float raio_circulo, area_circulo;
    float base_maior_trapezio, base_menor_trapezio, altura_trapezio, area_trapezio;
    float base_retangulo, altura_retangulo, area_retangulo;
    float diagonal_menor_losango, diagonal_maior_losango, area_losango;

    const float pi = 3.14;
	

    //1. TRIANGULO
    printf("--- AREA DE UM TRIANGULO --- ");
    
	//Entrada de dados - Informa a base e altura do triangulo
    printf("\nINSIRA O TAMANHO DA BASE DO TRIANGULO: ");
    scanf("%f", &base_triangulo);

    printf("INSIRA O TAMANHO DA ALTURA DO TRIANGULO: ");
    scanf("%f", &altura_triangulo);
	
	//Processamento - Calcula a area do triangulo
    area_triangulo = (base_triangulo * altura_triangulo)/2;
	
	//Saida de dados - Imprime a �rea do triangulo
    printf("\nAREA DO TRIANGULO -> (%.2f x %.2f) / 2 = %.2f", base_triangulo, altura_triangulo, area_triangulo);


    //2. QUADRADO
    printf("\n--- AREA DE UM QUADRADO ---\n");
	
	//Entrada de dados - Informa o lado do quadrado
    printf("\nINSIRA O TAMANHO DO LADO DO QUADRADO: ");
    scanf("%f", &lado_quadrado);
	
	//Processamento - Calcula a area do quadrado
    area_quadrado = lado_quadrado * lado_quadrado;
	
	//Saida de dados - Informa a area do quadrado
    printf("\nAREA DO QUADRADO -> %.2f ^ 2 = %.2f", lado_quadrado, area_quadrado);


    //3. CIRCULO (π * r²)
    printf("\n--- AREA DE UM CIRCULO ---\n");
	
	//Entrada de dados - Informa o raio do circulo
    printf("INSIRA O RAIO DO CIRCULO: ");
    scanf("%f", &raio_circulo);

	//Processamento - Calcula a area do circulo
    area_circulo = (pi * (raio_circulo*raio_circulo));
	
	//Saida de dados - Imprime a area do circulo
    printf("\nAREA DO CIRCULO -> 3.14 x %.2f ^ 2 = %.2f", raio_circulo, area_circulo);


    //4. TRAPEZIO
    printf("\n--- AREA DE UM TRAPEZIO ---\n");
	
	//Entrada de dados - Informa as bases e altura do trapezio
    printf("INSIRA A BASE MAIOR DO TRAPEZIO: ");
    scanf("%f", &base_maior_trapezio);

    printf("INSIRA A BASE MENOR DO TRAPEZIO: ");
    scanf("%f", &base_menor_trapezio);

    printf("INSIRA A ALTURA DO TRAPEZIO: ");
    scanf("%f", &altura_trapezio);
	
	//Processamento - Calcula a area do trapezio
    area_trapezio = (base_maior_trapezio + base_menor_trapezio) * (altura_trapezio / 2);
	
	//Saida de dados - Imprime a area do trapezio
    printf("\nAREA DO TRAPEZIO -> (%.2f + %.2f) x %.2f / 2 = %.2f", base_maior_trapezio, base_menor_trapezio, altura_trapezio, area_trapezio);


    //5. RETANGULO
    printf("\n--- AREA DE UM RETANGULO ---\n");
	
	//Entrada de dados - Informa a base e altura do retangulo
    printf("INSIRA A BASE DO RETANGULO: ");
    scanf("%f", &base_retangulo);

    printf("INSIRA A ALTURA DO RETANGULO: ");
    scanf("%f", &altura_retangulo);
	
	//Processamento - Calcula a area do retangulo
    area_retangulo = base_retangulo * altura_retangulo;
	
	//Saida de dados - Imprime a area do retangulo
    printf("\nAREA DO RETANGULO -> %.2f x %.2f = %.2f", base_retangulo, altura_retangulo, area_retangulo);


    //6. LOSANGO
    printf("\n--- AREA DE UM LOSANGO ---\n");
	
	//Entrada de dados - informa as diagonais do losango
    printf("INSIRA A DIAGONAL MAIOR: ");
    scanf("%f", &diagonal_maior_losango);

    printf("INSIRA A DIAGONAL MENOR: ");
    scanf("%f", &diagonal_menor_losango);
	
	//Processamento - Calcula a area do losango
    area_losango = (diagonal_maior_losango * diagonal_menor_losango) / 2;
	
	//Saida de dados - Imprime a area do losango
    printf("\nAREA DO LOSANGO -> (%.2f x %.2f) / 2 = %.2f", diagonal_maior_losango, diagonal_menor_losango, area_losango);
	
	return 0;
}
