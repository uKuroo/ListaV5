/*Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6*/
#include <stdio.h>

int main()
{
    float velM, velKM;
    
    printf("Insira a velocidade em m/s\n");
    scanf("%f",&velM);
    
    velKM = velM * 3.6;
    
    printf("Velocidade em km/h: %.2f",velKM);
    
    return 0;
}
