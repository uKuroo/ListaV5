/*Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius*/
#include <stdio.h>

int main()
{
    float fahrenheint, celsius;
    
    printf("Insira a temperatura em Fahrenheint\n");
    scanf("%f",&fahrenheint);
    
    celsius = (fahrenheint - 32) * 5/9;
    
    printf("Temperatura em graus Celsius: %.2f",celsius);
    
    return 0;
}
