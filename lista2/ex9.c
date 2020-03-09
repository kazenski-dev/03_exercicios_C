#include <stdio.h>
#include <stdlib.h>
/* 9) Faça um programa de cálculo de custo de energia de dois aparelhos de um estabelecimento comercial.
O usuário entrará com o valor da potência do aparelho (em watts) e o tempo de utilização (em horas) diário de ambos os aparelhos.
O programa deverá apresentar o nome do aparelho, o seu custo em reais por hora, por dia e por mês.
(Obs: a CELESC estabelece que um aparelho de 1000 watts de potência ligado por uma hora custa 0,5204900 reais para o estabelecimento).
*/

int main()
{
    float potencia1, horas1, potencia2, horas2;

    printf(" Informe a potencia do equipamento 1 em watts: ");
    scanf("%f", &potencia1);
    printf("\n Informe a quantidade de horas de uso do equuipamento 1: ");
    scanf("%f", &horas1);
    printf("\n\n Informe a potencia do equipamento 2 em watts: ");
    scanf("%f", &potencia2);
    printf("\n Informe a quantidade de horas de uso do equuipamento 2: ");
    scanf("%f", &horas2);

    printf("\n\n O custo por hora do equipamento 1 eh: R$%.2f", (potencia1/1000) * 0.5204900);
    printf("\n O custo por dia do equipamento 1 eh: R$%.2f", (potencia1/1000 * horas1) * 0.5204900);
    printf("\n O custo por mes do equipamento 1 eh: R$%.2f", ((potencia1/1000 * horas1) * 0.5204900)*30);
    printf("\n\n O custo por hora do equipamento 2 eh: R$%.2f", (potencia2/1000) * 0.5204900);
    printf("\n O custo por dia do equipamento 2 eh: R$%.2f", (potencia2/1000 * horas2) * 0.5204900);
    printf("\n O custo por mes do equipamento 2 eh: R$%.2f", ((potencia2/1000 * horas2) * 0.5204900)*30);

    return 0;
}
