/*
Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são 
passados pelo usuário através do teclado*/
#include <stdio.h>

int main()
{
    int dividendo, divisor, resultado, count, resto;
    
    printf("Insira o dividendo e o divisor\n");
    scanf("%d %d",&dividendo,&divisor);
    
    resultado = dividendo - divisor;
    
    for(count=1;(resultado - divisor) >= 0;count++){
        dividendo-=divisor;
        resultado = dividendo - divisor;
    }
    printf("Resto: %d",resultado);
    
    return 0;
}
