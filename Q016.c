/*Escreva um programa para gerar o invertido de um número com três algarismos
(exemplo: o invertido de 498 é 894).*/
#include <stdio.h>

int main()
{
    int num, cen, dez, uni, inv;
    printf("Insira um numero de 3 digitos para inverte-lo\n");
    scanf("%d",&num);
    
    cen = num / 100;
    dez = num % 100 / 10;
    uni = num % 100 % 10;
    
    inv = uni * 100 + dez * 10 + cen;
    printf("Inverso: %d",inv);
    
    
    return 0;
}
