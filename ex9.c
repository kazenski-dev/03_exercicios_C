#include <stdio.h>
#include <stdlib.h>
/* 9) Fa�a um programa de c�lculo de custo de energia de dois aparelhos de um estabelecimento comercial.
O usu�rio entrar� com o valor da pot�ncia do aparelho (em watts) e o tempo de utiliza��o (em horas) di�rio de ambos os aparelhos.
O programa dever� apresentar o nome do aparelho, o seu custo em reais por hora, por dia e por m�s.
(Obs: a CELESC estabelece que um aparelho de 1000 watts de pot�ncia ligado por uma hora custa 0,5204900 reais para o estabelecimento).
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
