/*2.Vetor Valores CHAR:
2.Ordenação Bubble Sort 1ª Versão - Vetor com valores char 156 e 256 caracteres – 
realizar o controle de comparações, troca e tempo execução – 
gerar de forma randômica*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

char VetorChar[100];
int comparar,troca;


main(){
	
	clock_t tempo;
	tempo = clock();
  
	system("cls");
	for(int i=0;i<100;i++){
		VetorChar[i] = 156 + rand() % (256 - 156);		
	}
//ordenar Bubble sort 1ª versao melhorada
comparar=0;
troca=0;
for (int i = 1; i <= 99; i++)
{
for (int j = 99; j >= i; j--)
{ comparar++;
  if (VetorChar[j] < VetorChar[j-1])
  {
     int aux = VetorChar[j];
     VetorChar[j] = VetorChar[j-1];
    VetorChar[j-1] = aux;
    troca++;
  }
}
}	

cout << "\n Vetor em Ordem Crescente \n ";
for (int i = 0; i < 100; i++)
{
    printf("\n Vetor[%d] : %c [%d]", i,VetorChar[i],VetorChar[i]);}
	
    
cout<<"\n\n";
cout<<"\n Quantidade de comparacao : "<<comparar;
cout<<"\n Quantidade de Trocas : "<<troca;
printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
cout<<"\n\n";
system("pause");}

