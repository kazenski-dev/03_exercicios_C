#include <stdio.h>
#include <stdlib.h>

/* 6) Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.
Considerar que a m�dia � ponderada e que o peso das notas �: 2, 3 e 5, respectivamente. */

int main(){


  float nota1,nota2,nota3,mediaFinal ;

  printf("Digite a primeira nota : ");
    scanf("%f",&nota1);

  printf("Digite a segunda nota : ");
    scanf("%f",&nota2);

  printf("Digite a terceira nota : ");
    scanf("%f",&nota3);

  mediaFinal=((nota1*2)+(nota2*3)+(nota3*5))/10;

  printf("A media final foi = %.1f\n",mediaFinal);


  return 0;

}
