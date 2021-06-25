#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int VetorInt[2000];
int comparar,troca;


main(){
	
	clock_t tempo;
	tempo = clock();
  
	system("cls");
	for(int i=0;i<2000;i++){
		VetorInt[i]= 3000 + rand() % (5000 - 3000);		
	}
//ordenar Bubble sort
comparar=0;
troca=0;
for (int i = 1; i <= 2000; i++)
{
for (int j = 0; j < 1998; j++)
{ comparar++;
  if (VetorInt[j] > VetorInt[j+1])
  {
     int aux = VetorInt[j];
     VetorInt[j] = VetorInt[j+1];
    VetorInt[j+1] = aux;
    troca++;
  }
}
}	

cout << "\n Vetor em Ordem Crescente \n ";
for (int i = 0; i < 2000; i++)
{
    cout << "\n Vetor["<<i+1<<"] : "<<VetorInt[i]<<"\n";}
    
cout<<"\n\n";
cout<<"\n Quantidade de comparacao : "<<comparar;
cout<<"\n Quantidade de Trocas : "<<troca;
printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
cout<<"\n\n";
system("pause");}
