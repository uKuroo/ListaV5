/*Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro*/
#include <stdio.h>

int main()
{
    int base, altura, area;
    
    printf("Insira a base do retângulo\n");
    scanf("%d",&base);
    
    printf("Insira a altura do retângulo\n");
    scanf("%d",&altura);
    
    area = base * altura;
    
    printf("Área do retângulo: %d",area); 
    
    return 0;
}
