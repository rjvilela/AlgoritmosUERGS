    /*Construa um programa que calcule a quantidade de latas de tinta necessárias e o custo
para pintar tanques cilíndricos de combustível, onde são fornecidos a altura e o raio desse
cilindro.
Sabendo que:
- a lata de tinta custa R$20,00
- cada lata contém 5 litros
- cada litro de tinta pinta 3 metros quadrados.
Sabendo que:
Área do cilindro=3.14*raio2 + 2*3.14*raio*altura
e que raio e altura são dados de entrada.*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float raio, altura, area_base, area_lateral, area_total, rendimento_lata, valor_lata, qtd_latas;

    printf("digite o raio do cilindro: \n");
    scanf("%f", &raio);
    printf("digite a altura do cilindro: \n");
    scanf("%f", &altura);
    printf("digite o valor da lata de tinta: \n");
    scanf("%f",&valor_lata);
    printf("digite o rendimento da lata comprada em metros quadrados: \n");
    scanf("%f",&rendimento_lata);

    area_base = (float)(pow(3.14 , 2)) *raio;
    area_lateral = (float) (2 * 3.14 * altura);
    area_total = 2*area_base+area_lateral;
    
    qtd_latas=area_total/rendimento_lata;
    
    printf ("voce ira precisar de %.2f\n", qtd_latas);
    printf ("voce ira precisar de %.2f reais", valor_lata*qtd_latas);
}