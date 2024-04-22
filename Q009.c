/*Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura*/
#include <stdio.h>

int main()
{
    float raio, altura, volume;
    
    printf("Insira o raio da base da lata\n");
    scanf("%f",&raio);
    
    printf("Insira a altura da lata\n");
    scanf("%f",&altura);
    
    volume = (raio * raio) * 3.14 * altura;
    
    printf("Volume: %.2f",volume);
    
    return 0;
}
