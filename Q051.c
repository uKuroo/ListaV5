/*
A série de Fibonacci é formada pela sequencia: 
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N 
sendo uma entrada do algoritmo)
*/
#include <stdio.h>

int main()
{
    int num, count, anteante, ante, atual, gante;
    anteante=1;ante=1;
    
    printf("Insira quantos digitos de fibonacci: ");
    scanf("%d",&num);
    
    if(num == 1)
        printf("\n1 ");
    if(num >= 2)
        printf("1 1 ");
    if(num > 2){
        for(count = 3;count <= num;count++){
            atual = ante + anteante;
            printf("%d ",atual);
            gante = ante;
            ante = atual;
            anteante = gante;
        }
    }
    return 0;
}
