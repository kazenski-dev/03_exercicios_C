/*
1 – Faça um programa que leia 13 nomes definido pelo usuário, inserindo-os em um vetor e que os 
ordene utilizando a ideia do algoritmo da inserção. No final, o programa deve mostrar todos os 
nomes ordenados alfabeticamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<conio.h>
#include<iostream>
#include<time.h>

using namespace std;

int main(){
	
	char Nomes[13][30], nomeEscolhido[1];
	int i, j, y;
	
	for(i=0;i<13;i++){
		
		//cout<<"\n Digite o nome "<<i+1<<": "<<"\n";
		//cin>>Nomes[i];
		
		printf("Digite o %d nome: ", i+1);
  		scanf("%s", &Nomes[i]);
		
		printf(nome);
		
		for(j=1;j<13;j++){
			nomeEscolhido[0] = Nomes[j][30];
			j = i-1;
			
			while((j>=0)&& (Nomes[j][30]>nomeEscolhido[0])){
				Nomes[j+1][30] = Nomes[j][30];
				j = j-1;
			}
			Nomes[j+1][30] = nomeEscolhido[0];
		}
	}
	//mostrando lista de nomes
	for(y=0;y<13;y++){
		//cout<<"<<y+1<< numero <<Nomes[y][30]>>";
		printf("- %d nome: ", i+1);
	}
	
	
}


