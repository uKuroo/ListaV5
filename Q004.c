/*Dado os tres lados de um triângulo determinar o perímetro do mesmo*/
#include <stdio.h>

int main()
{
    int lado1, lado2, lado3, perimetro;
    
    printf("Insira o lado a do triangulo\n");
    scanf("%d",&lado1);
    printf("Insira o lado b do triangulo\n");
    scanf("%d",&lado2);
    printf("Insira o lado c do triangulo\n");
    scanf("%d",&lado3);
    
    perimetro = lado1 + lado2 + lado3;
    
    printf("Perímetro do triângulo: %d", perimetro);
    
    return 0;
}
