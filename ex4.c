#include <stdio.h>
#include <stdlib.h>

/* 4) Calcule o sal�rio l�quido do funcion�rio sabendo que este � constitu�do pelo sal�rio bruto mais o
valor das horas extras subtraindo 8% de INSS do total. Ser�o lidos nesse problema o sal�rio
bruto, o valor das horas extras e o n�mero de horas extras. Apresentar ao final o sal�rio l�quido. */



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

