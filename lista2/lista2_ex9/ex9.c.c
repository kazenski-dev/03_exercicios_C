#include <stdio.h>
#include <stdlib.h>

/* 9) Faça um programa de cálculo de custo de energia de dois aparelhos de um estabelecimento comercial.
O usuário entrará com o valor da potência do aparelho (em watts) e o tempo de utilização (em horas) diário de ambos os aparelhos.
 O programa deverá apresentar o nome do aparelho, o seu custo em reais por hora, por dia e por mês.
(Obs:a CELESC estabelece que um aparelho de 1000watts de potência ligado por uma hora custa 0,5204900 reais para o estabelecimento).

*/

int main(){

    float Aparelho1,tempo1,Aparelho2,tempo2,valorHora ;


  printf("Digite o valor da potencia do aparelho 1 : ");
  scanf("%f",&Aparelho1);

  printf("Digite o tempo de utilizacao do aparelho 1: ");
  scanf("%f",&tempo1);

  printf("Digite o valor da potencia do aparelho 2 : ");
  scanf("%f",&Aparelho2);

  printf("Digite o tempo de utilizacao do aparelho 2: ");
  scanf("%f",&tempo2);




  return 0;

}
