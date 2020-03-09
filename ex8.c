#include <stdio.h>
#include <stdlib.h>

/* 8) A condição física de uma pessoa pode ser medida com base no cálculo do Índice de Massa Corporal (IMC).
 O mesmo é calculado dividindo-se o peso desta pessoa em kg pelo quadrado sua altura em m.
 Escreva um programa que leia o peso em kg e a altura de uma pessoa em m, calcule e mostre o IMC.
 Se as entradas fossem 70.0kg para o peso 1.80m para altura então a saída seria aproximadamente 21.60.
*/

int main(){

  float peso,altura,IMC ;

  printf("Digite o seu peso em kilogramas : ");
  scanf("%f",&peso);

  printf("Digite  a sua altura em metros: ");
  scanf("%f",&altura);

  IMC = peso /(altura*altura);

  printf("O seu IMC vale = %.2f\n",IMC);

  return 0;

}
