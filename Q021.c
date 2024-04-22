/* Escreva um programa que leia um número e exiba se ele é positivo ou negativo*/
#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero para descobrir se e positivo ou negativo\n");
    scanf("%d",&num);
    
    if(num < 0)
        printf("Numero e negativo!");
    if(num > 0)
        printf("Numero e positivo!");
    if(num == 0)
        printf("Numero e zero");
    
    return 0;
}
