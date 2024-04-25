/*
Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem 
decrescente)
*/
#include <stdio.h>

int main()
{
    int num, count;
    num=100;
    for(;count < 100;count++){
        printf("%d ",num);
        num--;
    }
    
    return 0;
}
