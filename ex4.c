#include <stdio.h>
#include <stdlib.h>

/* 4) Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o
valor das horas extras subtraindo 8% de INSS do total. Serão lidos nesse problema o salário
bruto, o valor das horas extras e o número de horas extras. Apresentar ao final o salário líquido. */



int main(){


  float salarioBase,valorHoraExtra,HoraExtra,salarioLiquido ;

  printf("Digite o valor do seu salario bruto : ");
    scanf("%f",&salarioBase);

  printf("Digite o valor que recebe por hora extra: ");
        scanf("%f",&valorHoraExtra);


  printf("Digite a quantidade de hora extra do mes: ");
            scanf("%f",&HoraExtra);


  salarioLiquido = salarioBase +(HoraExtra * valorHoraExtra)-0.08 *(salarioBase +(HoraExtra * valorHoraExtra));


  printf("O valor do  salario liquido  sera = %.2f\n",salarioLiquido);


  return 0;




}

