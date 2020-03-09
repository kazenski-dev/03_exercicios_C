#include <stdio.h>
#include <stdlib.h>

/* 7) Faça um programa que peça para o usuário digitar 4 valores inteiros,coloque
 estes valores nas variáveis a, b, c, d e imprima na tela o resultado da seguinte expressão: (𝑎 + 𝑏 + 𝑐) × 𝑑
*/

int main(){

    int a,b,c,d,total ;

    printf("Digite um valor inteiro : ");
    scanf("%d",&a);

    printf("Digite o segundo valor inteiro : ");
    scanf("%d",&b);

    printf("Digite o terceiro valor inteiro : ");
    scanf("%d",&c);

    printf("Digite o quarto valor inteiro : ");
    scanf("%d",&d);

   total=(a+b+c)*d;

  printf("O valor calculado da expressao foi = %.2d\n",total);

  return 0;

}
