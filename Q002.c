/*Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo*/
#include <stdio.h>

int main()
{
    int base, area, perimetro;
    
    printf("Insira o lado do quadrado\n");
    scanf("%d",&base);
    
    area = base * base;
    perimetro = base * 4;
    
    printf("Área do quadrado: %d\n",area);
    printf("Perímetro do quadrado: %d",perimetro);
    

    return 0;
}

