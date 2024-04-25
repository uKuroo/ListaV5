/*
Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 
100
*/
#include <stdio.h>

int main()
{
    int num, count;
    num=1;count=0;
    for(;count < 100;count++){
        if((num % 2) == 0){
            printf("%d ",num);
        }
        num++;
    }
    return 0;
}
