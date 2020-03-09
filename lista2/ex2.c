#include <stdio.h>
#include <stdlib.h>

/* 2) Faça um programa o qual o usuário digite seu peso e o de mais duas pessoas, imprima os valores
digitados.*/

int main(){

  float peso_1,peso_2,peso_3 ;


  printf("Digite o seu peso em kilogramas : ");
    scanf("%f",&peso_1);

    printf("Digite o peso da segunda pessoa em kilogramas: ");
        scanf("%f",&peso_2);


        printf("Digite o peso da terceira pessoa em kilogramas: ");
            scanf("%f",&peso_3);




  printf("O seu peso em kilogramas vale = %.2f\n",peso_1);

    printf("O peso da segunda pessoa em kilogramas vale = %.2f\n",peso_2);

       printf("O peso da terceira pessoa em kilogramas vale = %.2f\n",peso_3);


  return 0;


}
