/*Converter um inteiro informado menor que 32 para sua representação em binário*/
#include <stdio.h>

int main()
{
    int num, b1, b2, b3, b4, b5, bin;
    
    printf("Insira um numero inferior a 32 para converte-lo em binario\n");
    scanf("%d",&num);
    
    b5 = num % 2;
    num = num / 2;
    b4 = num % 2;
    num = num / 2;
    b3 = num % 2;
    num = num / 2;
    b2 = num % 2;
    num = num /2;
    b1 = num % 2;
    
    bin = b1 * 10000 + b2 * 1000 + b3 * 100 + b4 * 10 + b5;
    
    printf("Numero em binario: %05d",bin);
    
    return 0;
}
