#include <stdio.h>
#include <stdlib.h>

/* 3) Fa�a um programa que leia pelo teclado um valor, em reais, converta e imprima o mesmo num
valor em d�lares. Considere que R$3.80 seja equivalente a US$1.00. */


int main(){

     float valorReal,valorDolar ;

  printf("Digite a quantia em reais a ser convertida : ");
    scanf("%f",&valorReal);

   valorDolar = valorReal / 3.8;

  printf("A Quantia digitada  vale em dolares US$%.2f\n",valorDolar);



  return 0;

}
