#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<conio.h>
#include<iostream>
#include<time.h>

using namespace std;

void Menu();
	
void VetorOrdInt(){
	fflush(stdin);
	
	int Numero[5];
	int numUser = 0;	
	int auxN;
	
	cout << "\nDigite a quantidade de valores a inserir: \n";
	cout<<"> ";
	cin >> numUser;
	
	for (int i=0;i<5;i++){
		cout << "\nDigite o valor do numero ["<<i+1<<"] : ";
		cin >> Numero[i];
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			
			if (Numero[i]<Numero[j]){
				auxN = Numero[i];
				Numero[i]=Numero[j];
				Numero[j]=auxN;
			}
		}
	}
	
	printf("Digite qualquer tecla para gerar os numeros.\n");
	getch();
	
	//mostra os valores
	for (int i=0; i<5;i++){
		cout<<Numero[i]<<endl;
	}
	system("pause");
	Menu();
	
}
void VetorOrdChar(){
	fflush(stdin);
	
	char Letras[5];
	char auxL;
	int numUser = 0;
	
	cout << "\nDigite a quantidade de valores a inserir: \n";
	cout<<"> ";
	cin >> numUser;
	
	for (int i=0;i<5;i++){
		cout << "\nDigite a letra ["<<i+1<<"] : ";
		cin >> Letras[i];
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			
			if (Letras[i]<Letras[j]){
				auxL = Letras[i];
				Letras[i]=Letras[j];
				Letras[j]=auxL;
			}
		}
	}
	
	printf("Digite qualquer tecla para gerar as letras.\n");
	getch();
	
	for (int i=0; i<5;i++){
		cout<<Letras[i]<<endl;
	}
	system("pause");
	Menu();
}

void VetorOrdString(){	
	fflush(stdin);
	
	char Palavras[5][10];
	int numUser = 0;
	
	cout << "\nDigite a quantidade de valores a inserir: \n";
	cout<<"> ";
	cin >> numUser;
	
	char *stringPrimaria;
	char *novaString;
	char *stringfinal;
	register int i, j;
	int str_len=30, trocas=0,comparacoes=0;
	stringPrimaria= "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
			
	clock_t tempo;
	tempo = clock();
	
	printf("Digite qualquer tecla para gerar as strings.\n");
	getch();
	
	for(j=0;j<300;j++){


		// aloca memoria
		novaString =(char*)malloc((62+1)*sizeof(char));
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
	
	system("pause");
	Menu();
}

void Menu(){
	
	int opcao;
	system("cls");
	
	cout<<"\n 1-Logica de ordenar valores INT.";
	cout<<"\n 2-Logica de ordenar valores CHAR.";
	cout<<"\n 3-Logica de ordenar valores STRING.";
	cout<<"\n 4-Sair do Sistema.";
	cout<<"\nDigite a opcao desejada";
	cin>>opcao;
	
	switch(opcao){
		case 1:VetorOrdInt();break;
		case 2:VetorOrdChar();break;
		case 3:VetorOrdString();break;
		case 4:exit(0); break;
		default:Menu();
	}
}

main(){
	
	system("cls");
	Menu();		
}	
