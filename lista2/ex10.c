#include <stdio.h>
#include <stdlib.h>

/* 10) Desenvolva um programa em C para efetuar o c�lculo do pre�o em combust�vel gasto em uma viagem.
Para isso, pe�a ao usu�rio que informa a quantidade de litros a serem abastecidos, o pre�o do combust�vel por litro,
a rela��o Km/l do carro e a dist�ncia a ser percorrida.
*/

int main()
{
    float  valorLitro, kmporLitro, distancia;


    printf("\n\n Informe o valor do litro do combustivel: ");
    scanf("%f",&valorLitro);
    printf("\n Informe a relacao Km/l do veiculo: ");
    scanf("%f",&kmporLitro);
    printf("\n Informe a distancia a ser percorrida: ");
    scanf("%f",&distancia);

    printf("\n O valor de combustivel gasto na viagem sera de R$%.2f", (distancia/kmporLitro)*valorLitro);


    return 0;
}
