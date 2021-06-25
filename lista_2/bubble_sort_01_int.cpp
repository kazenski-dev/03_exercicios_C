/*1.Vetor Valores INT: 
1.Ordenação Bubble Sort esolhida  - Vetor com valores Int  3.000 e 5.000 números
 – realizar o controle de comparações, troca e tempo execução – 
 gerar de forma randômica.
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int VetorInt[2000];
int ComparaTroca, troca;

main(){
	
	for(int i=0;i<2000;i++){
		VetorInt[i]= 3000 + rand() % (5000 - 3000);	
	}
	clock_t tempo;
	tempo = clock();
	
	system("cls");
	
	
	ComparaTroca=0;
	troca=0;
	
	for (int i=1;i<=2000;i++){
		for (int j=0;j<1998;j++){
			ComparaTroca++;
			
			if (VetorInt[j]>VetorInt[j+1]){
				
				int aux = VetorInt[j];
				VetorInt[j]=VetorInt[j+1];
				VetorInt[j+1]=aux;
				troca++;
			}
		}
	}
	cout << "\n Vetor em Ordem Crescente \n ";
	for (int i=0; i<2000;i++){
		cout<<"\n Vetor["<<i+1<<"] : "<<VetorInt[i]<<endl;
	}
	
	cout<<"\n Quantidade de Comparacoes : "<<ComparaTroca;
	cout<<"\n Quantidade de Trocas : "<<troca;
	
	printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
	cout<<"\n\n";
	system("pause");

}

