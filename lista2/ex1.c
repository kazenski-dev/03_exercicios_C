#include <stdio.h>
#include <stdlib.h>

/* 1) Fa�a um programa que pe�a ao usu�rio para digitar sua altura, leia o dado digitado e imprima o
valor.*/

int main(){

  float altura ;

  printf("Digite a sua altura em metros: ");
 scanf("%f",&altura);


  printf("A sua altura em metros vale = %.2f\n",altura);

  return 0;

}
