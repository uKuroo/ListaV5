/*Um circuito elétrico é composto por duas resistências R1 e R2 em paralelo, ambas em sequência de uma resistência R3.
Faça um algoritmo para calcular a resistência equivalente desse circuito*/
#include <stdio.h>

int main()
{
    float r1, r2, r3, res;
    
    printf("Informe o R1\n");
    scanf("%f",&r1);
    printf("Informe o R2\n");
    scanf("%f",&r2);
    printf("Informe o R3\n");
    scanf("%f",&r3);
    
    res = (r1 * r2) / (r1 + r2) + r3;
    printf("Resistência: %.2f", res);
    
    return 0;
}
