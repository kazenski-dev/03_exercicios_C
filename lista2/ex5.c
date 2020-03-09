#include <stdio.h>
#include <stdlib.h>

/* 5) Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em
anos, meses e dias. */


int main(){

    int anos,dias,meses;


printf("Digite a sua idade em dias : ");
    scanf("%d",&dias);

    anos = (dias/365);
    meses = (dias%365)/30;
    dias = (dias%365)%30;

printf("a sua idade eh:%danos,%dmeses,%ddias",anos,meses,dias);


    return 0;

}
