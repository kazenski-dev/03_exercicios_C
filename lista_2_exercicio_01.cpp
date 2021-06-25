/*
Faça um programa que leia 13 nomes definido pelo usuário, inserindo-os em um vetor e que os 
ordene utilizando a ideia do algoritmo da inserção. No final, o programa deve mostrar todos 
os nomes ordenados alfabeticamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <iostream>
#include <time.h>

using namespace std;

char Nomes[13][30];
char nome_aux;
int j;


int main(){
	
	//captando os nomes pelo teclado
	for (int i=0;i<13;i++){
		cout << "\nDigite o nome ["<<i+1<<"] : ";
		cin >> Nomes[i];
	}
	
	//ordenando os nomes
	for (int i=1;i<13;i++){
		
		nome_aux = Nomes[i][30];
		j=i-1;
		
		while((j>=0) && (Nomes[j][30]>nome_aux)){
			
			Nomes[j+1][30]=Nomes[j][30];
			j=j-1;	
		}
			
		Nomes[j+1][30]=nome_aux;
	}
	
	system("pause");
	
	//mostrando os nomes ordenados
	for (int i=0;i<13;i++){
		printf ("\n%d : %s\n",i+1, Nomes[i]);
	}
	
	system("pause");
}
	

