/*
Escreva um programa que leia 5 números, e imprima a média entre eles.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, media;
    
    printf("Insira 5 numeros para descobrir a media\n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    
    media = (num1+num2+num3+num4+num5) / 5;
    
    printf("Media: %d",media);
    
    return 0;
}
