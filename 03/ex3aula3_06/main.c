#include <stdio.h>
#include <stdlib.h>

void divisivel(int a, int b){

      if (a%b == 0){

        printf("o numero %d eh divisivel por %d\n");
      }else{
        printf("o numero %d nao eh divisivel por %d\n");
      }
}

int main(){

    int a;

    printf("Digite um numero inteiro: ");
      scanf("%d",&a);

       divisivel(a,2);
       divisivel(a,3);
       divisivel(a,5);
       divisivel(a,7);

    return 0;
}
