#include <stdio.h>
#include <stdlib.h>

/* 9) Fa�a um programa de c�lculo de custo de energia de dois aparelhos de um estabelecimento comercial.
O usu�rio entrar� com o valor da pot�ncia do aparelho (em watts) e o tempo de utiliza��o (em horas) di�rio de ambos os aparelhos.
 O programa dever� apresentar o nome do aparelho, o seu custo em reais por hora, por dia e por m�s.
(Obs:a CELESC estabelece que um aparelho de 1000watts de pot�ncia ligado por uma hora custa 0,5204900 reais para o estabelecimento).

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
