/*1.Vetor Valores INT: 
1.Ordena��o Bubble Sort esolhida  - Vetor com valores Int  3.000 e 5.000 n�meros
 � realizar o controle de compara��es, troca e tempo execu��o � 
 gerar de forma rand�mica.
2.Vetor Valores CHAR:
2.Ordena��o Bubble Sort  - Vetor com valores char 156 e 256 caracteres � 
realizar o controle de compara��es, troca e tempo execu��o � 
gerar de forma rand�mica
3.Vetor Valores STRING:
3.Ordena��o Bubble Sort  - Vetor com valores strings 30 e 300 strings � 
realizar o controle de compara��es, troca e tempo execu��o � 
gerar de forma rand�mica.
4. Sistema de Menu de Op��es Completo:
4.Menu para sele��o com os c�digos dos m�dulos 1, 2,3 e 4 � Sair do sistema.
*/

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


