/*
Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 
100.
*/
#include <stdio.h>

int main()
{
    int num, count;
    num=1;
    
    for(;count < 100;count++){
        printf("%d ",num);
        num++;
    }
    
    return 0;
}
