/*Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma*/
#include <stdio.h>

int main()
{
    float raio, area, perimetro;
    
    printf("Insira o raio da circunferencia\n");
    scanf("%f",&raio);
    
    area = (raio * raio) * 3.14;
    perimetro = raio * 2 * 3.14;
    
    printf("Area da circunferencia: %.2f\n",area);
    printf("Perimetro da circunferencia: %.2f",perimetro);
    

    return 0;
}
