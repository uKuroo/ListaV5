/*Ler um numero inteiro e exibir o seu sucessor*/
#include <stdio.h>

int main()
{
    int num, sucessor;
    
    printf("Insira um número para descobrir seu sucessor\n");
    scanf("%d",&num);
    
    sucessor = num + 1;
    
    printf("Sucessor do numero e: %d", sucessor);
    
    return 0;
}
