/*
3.Vetor Valores STRING:
3.Ordenação Bubble Sort  - Vetor com valores strings 30 e 300 strings – 
realizar o controle de comparações, troca e tempo execução – 
gerar de forma randômica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<conio.h>
#include<iostream>
#include<time.h>

using namespace std;


int main (void) {
	
	char *stringPrimaria="0123456789abcdefghijklmnopqrstuvwxyz";
	char *novaString;
	char *stringfinal;
	register int i, j;
	int str_len=30, trocas=0,comparacoes=0;
			
	clock_t tempo;
	tempo = clock();
	
	for(j=0;j<300;j++){


		// aloca memoria
		novaString =(char*)malloc((30+1)*sizeof(char));
		if (!novaString){
			printf("[*]Erro ao alocar memoria.\n");
			exit (EXIT_FAILURE);
		}
		
		// gera string aleatória
		for (i=0;i<30;i++){
			novaString[i]=stringPrimaria[rand()%30];
			novaString[i+1]=0x0;
			comparacoes++;
		}		
		
		// imprive informações
		printf ("[%d]:%s\n",j+1,novaString );
		trocas++;
		
	}
	
	system("pause");
	system("cls");
	
	cout<<"\n\n";
	printf ("\n[TROCAS] Quantidade de trocas: %d\n",trocas );
	printf ("\n[COMPARACOES] Quantidade de comparacoes de caracteres: %d\n",comparacoes );
	printf("\n[TEMPO] Tempo necessario: %f segundos",(clock() - tempo) / (double)CLOCKS_PER_SEC);
	cout<<"\n\n";
	
}


