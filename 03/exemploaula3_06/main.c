#include <stdio.h>
#include <stdlib.h>

void parouImpar(int a){
   if (a%2 == 0){
    printf("o numero eh par");

   }else {
   printf("o numero eh impar");

   }
}

int main()
{
    int a;

    printf("Digite um numero imteiro: ");
    scanf("%d",&a);

    parouImpar(a);



    return 0;


}
