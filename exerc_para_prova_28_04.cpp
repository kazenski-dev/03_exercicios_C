

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<string.h>

using namespace std; //comandos de c e c++

main(){
	
	setlocale(LC_ALL, "portuguese"); //usar acentuacao
	//----------------------------------------------------
	//declarar lista
	struct ListaAlunos {
		int matricula;
		char nome[30];
		float media;
		ListaAlunos *prox;
	};//fim struct
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	ListaAlunos *inicio = NULL;
	ListaAlunos *fim = NULL;
	ListaAlunos *aux;
	ListaAlunos *ant;
	int opcao, achou;
	char nomeLocalizar[30];
	//----------------------------------------------------
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir na lista.\n";
		cout<<"\n 2 - Listar a lista. \n";
		cout<<"\n 3 - Consultar lista por nome\n";
		cout<<"\n 4 - Remover da lista por nome. \n";
		cout<<"\n 5 - Esvaziar lista. \n";
		cout<<"\n 6 - Sair do sistema.\n";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR NA LISTA-----------
			case 1:{
				
				//nova lista
				ListaAlunos *novo = new ListaAlunos();
				
				//preenchendo dados do usuario
				cout<<"\nDigite a matricula a ser inserida:";
				cin>>novo-> matricula;
				cout<<"\nDigite o nome a ser inserida:";
				cin>>novo-> nome;
				cout<<"\nDigite a media a ser inserida:";
				cin>>novo-> media;
				
				//verificar se a lista esta vazia
				if (inicio == NULL){
		
					inicio = novo;
					fim = novo;
					fim-> prox = NULL;
					cout<<"\nPrimeiro Aluno inseridos.";       
				}//fim if
				else{
					
					fim-> prox = novo;
					novo-> prox = NULL;
					fim = novo;
					cout<<"\nNovo Aluno inserido na lista.";
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
				
			}//fim case 1
			
			//-----------LISTAR A LISTA-----------
			
			case 2:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//listar todos elementos da lista
					
					cout<<"\nlistando Alunos cadastrados:";
					
					aux = inicio;
					
					while(aux != NULL){
						
						//impressao de valores no cmd
						cout<<"\n "<<aux->matricula;
					    cout<<"\n "<<aux->nome;
					    cout<<"\n "<<aux->media;
						
						aux = aux-> prox;//passa para prox elemento
						
						
					}//fim while
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
			
			//-----------CONSULTAR A LISTA POR NOME-----------
			
			case 3:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//listar todos elementos da lista
					
					cout<<"\nDigite o nome do aluno para consultar:";
					cin>>nomeLocalizar;
					
					aux = inicio;
					
					while(aux != NULL){
						
						//pega cada variavel e comapra os valores ASCII
						//se uma - a outra ==0 significa que sao iguais
						if(strcmp(aux->nome, nomeLocalizar)==0) {
							
							//impressao de valores no cmd
							
							cout<<"\n "<<aux->matricula;
					    	cout<<"\n "<<aux->nome;
					    	cout<<"\n "<<aux->media;
							
							aux-> prox = NULL;
						}//fim if
						
						aux = aux-> prox;//passa para prox elemento 
						
					}//fim while
				
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
								
				break;
			}//fim case 3
			
			
			//-----------REMOVER DA LISTA POR NOME-----------
			
			case 4:{ 
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//listar todos elementos da lista
					
					cout<<"\nDigite o nome do aluno para remover da lista:";
					cin>>nomeLocalizar;
					
					aux = inicio;
					ant = NULL;
					achou = 0;
					
					while(aux != NULL){
						
						//pega cada variavel e comapra os valores ASCII
						//se uma - a outra ==0 significa que sao iguais
						if(strcmp(aux->nome, nomeLocalizar)==0) {
							
							//impressao de valores no cmd
							cout<<"\n "<<aux->matricula;
					    	cout<<"\n "<<aux->nome;
					    	cout<<"\n "<<aux->media;
							
							achou ++;
							
							if(aux == inicio){//removendo se for inicio
								
								inicio = aux-> prox;
								delete(aux);
								aux = inicio;
								
							}//fim if aux == inicio
							
							else {
								
								if (aux == fim){
									ant-> prox = NULL;
									fim = ant;
									delete(aux);
									aux = NULL;
									
								}//fim if aux == fim 
								else {
									ant-> prox = aux-> prox;
									delete(aux);
									ant = ant-> prox;
									
								}//fim else dentro
								
							}//fim else
							
							ant = aux;
							aux = aux-> prox;
							
						}//fim if fora
					
					
					}//fim while
					
					if(achou == 0){
						cout<<"\nO aluno nao foi encontrado.";
					}//fim if
					
					else{
						cout<<"\nO aluno encontrado e removido.";
					}//fim else
				
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 4
			
			//-----------ESVAZIAR A LISTA -----------
			
			case 5:{
				
				aux = inicio;
				
				while(aux != NULL){
					
					inicio = inicio->prox;
					delete(aux);
					aux = inicio;
					
					cout<<"\nLista esvaziada.";
					
				}//fim while dentro
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 5
			
			//-----------SAIRDO PROGRAMA -----------
			
			case 6:{
				
				exit(0);
				
			}//fim case 6	
			
			break;//break so switch la de cima
		
		//----------------------------------------------------	
			
		}//fim switch
		
	//----------------------------------------------------
		
	}while(opcao != 6);//fim do

//----------------------------------------------------		
	
}//fim main
