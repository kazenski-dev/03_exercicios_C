#include <stdio.h>
#include <stdlib.h>

/* 10) Desenvolva um programa em C para efetuar o c�lculo do pre�o em combust�vel gasto em uma viagem.
Para isso, pe�a ao usu�rio que informa a quantidade de litros a serem abastecidos, o pre�o do combust�vel por litro,
 a rela��o Km/l do carro e a dist�ncia a ser percorrida.
*/

int main(){

    float quantidadeLitros,precoLitro,relacaokmL,distancia,valorGasto;

    printf("Digite quantos litros foi abastecido : ");
    scanf("%f",&quantidadeLitros);

    printf("Digite o valor do combusstivel  abastecido : ");
    scanf("%f",&precoLitro);

    printf("Digite o valoor referente ao consumo Km/L do seu carro ");
    scanf("%f",&relacaokmL);

    printf("Digite a distancia q voce ira percorrer  : ");
    scanf("%f",&distancia);


    quantidadeLitros = distancia/relacaokmL;
     valorGasto = precoLitro * quantidadeLitros;

   printf("O valor gasto para realizar essa viagem  e de: %f\n",valorGasto);

   printf("Para fazer essa viagem vc ira gastar um total de : %f litros\n",quantidadeLitros);

    return 0;
}
