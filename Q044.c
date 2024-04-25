/*
Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma 
de todos eles
*/
#include <stdio.h>

int main()
{
    int num, count, soma;
    num=1;count=0;
    for(;count < 100;count++){
        soma += num;
        printf("%d (%d)\n",num,soma);
        num++;
    }
    return 0;
}
