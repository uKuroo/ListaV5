/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio.*/
#include <stdio.h>

int main()
{
    float altura, sombra, sombrapredio, alturapredio;

    printf("Insira a sua altura, a sua sombra e a sombra do predio\n");
    scanf("%f %f %f",&altura,&sombra,&sombrapredio);
    
    alturapredio = (sombrapredio * altura) / sombra;

    printf("altura do predio: %.2f",alturapredio);

}