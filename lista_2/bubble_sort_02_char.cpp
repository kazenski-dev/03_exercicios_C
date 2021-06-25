/*
2.Vetor Valores CHAR:
2.Ordenação Bubble Sort  - Vetor com valores char 156 e 256 caracteres – 
realizar o controle de comparações, troca e tempo execução – 
gerar de forma randômica
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

char VetorChar[100];
int ComparaTroca, troca;

main(){
	
	for(int i=0;i<100;i++){
		VetorChar[i]= 156 + rand() % (256 - 156);	
	}
	system("cls");
	clock_t tempo;
	tempo = clock();
	
	system("cls");
	
	
	ComparaTroca=0;
	troca=0;
	
	for (int i=1;i<=99;i++){
		for (int j=0;j<98;j++){
			ComparaTroca++;
			
			if (VetorChar[j]>VetorChar[j+1]){
				
				int aux = VetorChar[j];
				VetorChar[j]=VetorChar[j+1];
				VetorChar[j+1]=aux;
				troca++;
			}
		}
	}
	cout << "\n Vetor em Ordem Crescente \n ";
	for (int i=0; i<100;i++){
		cout<<"\n Vetor["<<i+1<<"] : "<<VetorChar[i]<<endl;
	}
	
	cout<<"\n Quantidade de Comparacoes : "<<ComparaTroca;
	cout<<"\n Quantidade de Trocas : "<<troca;
	
	printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
	cout<<"\n\n";
	system("pause");

}

