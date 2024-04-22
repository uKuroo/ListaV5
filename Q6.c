/*Ler dois numeros inteiros e exibir o quociente e o resto da divisao inteira entre eles*/
#include <stdio.h>

int main()
{
    int num1, num2, divisao, resto;
    
    printf("Insira o primeiro numero para descobrir o resultado da divisao e o resto\n");
    scanf("%d",&num1);
    
    printf("Insira o segundo numero para descobrir o resultado da divisao e o resto\n");
    scanf("%d",&num2);
    
    divisao = num1 / num2;
    resto = num1 % num2;
    
    printf("Resultado da divisao: %d\n", divisao);
    printf("Resto da divisao: %d", resto);
    
    
    return 0;
}
