/*Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas*/
#include <stdio.h>

int main()
{
    float prova1, prova2, prova3, prova4, bim1, bim2, sem;
    
    printf("Insira a nota da primeira prova\n");
    scanf("%f",&prova1);
    printf("Insira a nota da segunda prova\n");
    scanf("%f",&prova2);
    printf("Insira a nota da terceira prova\n");
    scanf("%f",&prova3);
    printf("Insira a nota da quarta prova\n");
    scanf("%f",&prova4);
    
    bim1 = prova1 + prova2;
    bim2 = prova3 + prova4;
    
    sem = (bim1 + bim2) / 2;
    
    printf("Nota semestral do aluno: %.2f", sem);
    
    return 0;
}
