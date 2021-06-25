//Lista CIRCULAR

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
	struct Lista {
		int numero;	
		Lista *prox;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	Lista *inicio = NULL;
	Lista *fim = NULL;
	Lista *aux;
	Lista *ant;
	int opcao, achou = 0, elemento, numeroUser;
	
	//----------------------------------------------------
	
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir no inicio da lista.\n";
		cout<<"\n 2 - Inserir no fim da lista.\n";
		cout<<"\n 3 - Consultar toda lista.\n";
		cout<<"\n 3 - Remover da lista.\n";
		cout<<"\n 3 - Esvaziar a lista.\n";
		cout<<"\n 4 - Sair do sistema.\n";
		cout<<"\n->";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR ALUNO NO INICIO DA LISTA-----------
			
			case 1: {
					
				//nova lista
				Lista *novo = new Lista();
		
				//preenchendo dados do usuario
				cout<<"\nDigite a numero a ser inserido: ";
				cin>>novo-> numero;
				
				if(inicio == NULL){
					//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
					inicio = novo;
					fim = novo;
					fim->prox = inicio;
					
					cout<<"\nPrimeiro numero inserido na lista.";
					
				} //fim if
				else {
					//a lista ja tem elementos, e o novo sera o primeiro
					novo->prox = inicio;
					inicio = novo;
					fim -> prox = inicio;					
					
					cout<<"\nAluno inserido no inicio da lista.";
					
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 1
			
			//-----------INSERIR ALUNO NO FINAL DA LISTA-----------
				
			case 2: {

				//nova lista
				Lista *novo = new Lista();
		
				//preenchendo dados do usuario
				cout<<"\nDigite a numero a ser inserido: ";
				cin>>novo-> numero;
				
				if(inicio == NULL){
					//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
					inicio = novo;
					fim = novo;
					fim->prox = inicio;
					
					cout<<"Primeiro aluno inserido na lista.";
				}//fim if
				else {
					//a lista ja tem elementos, e o novo sera o ultimo
					fim->prox = novo;
					fim = novo;
					fim->prox = inicio;
					
					cout<<"Numero inserido no final da lista.";
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
				
			//-----------CONSULTAR TODA LISTA-----------	
			
			case 3: {
				
				if(inicio == NULL){
					//a lista estava vazia
					cout<<"Lista vazia.";
				
				}//fim if 
				else {
					//a lista ja tem elementos e serao mostrados inicio-fim
					cout<<"Consultando a lista ..\n.";
					
					aux = inicio;
					
					do{
						
						cout<<aux->numero<<" , ";
						aux = aux-> prox;//passa para prox elemento
						
					}while(aux != inicio);//fim while
					
				}//fim else
			
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3
			
			
			//-----------REMOVER DA LISTA-----------	
			
			case 4: {
				
				if(inicio == NULL){
					//a lista estava vazia
					cout<<"Lista vazia.";
				
				}//fim if 
				else {
					//a lista ja tem elementos e serao mostrados inicio-fim
					cout<<"Digite o numero a ser localizado e deletado.\n.";
					cin>>numeroUser;
					
					aux = inicio;
					ant = NULL;
					achou = 0;
					
					int quantidade = 0;
					
					do{
						//saber quantos elementos tem na lista
						quantidade++;
						aux = aux->prox;
							
					}while(aux != inicio);//fim do
				
					do{
						//se a lista tem apenas um elemento na lista
						if(inicio == fim && inicio->numero == numeroUser){
							
							delete(inicio);
							inicio = NULL;
							achou++;
							
						}//fim if
						else{
							
							if(aux->numero == numeroUser){
								achou++;
								
								if(aux == inicio){
									//numero a ser removido é o inicio
									inicio = aux-> prox;
									fim-> prox = inicio;
									delete(aux);
									aux = inicio;									
									
								}//fim if
								else if(aux == fim){
									//numero a ser removido é o fim 
									fim = ant;
									fim-> prox = inicio;
									delete(aux);
									aux = NULL;
									
								}//fim else if
								else{
									//numero a ser removido esta o meio da lista
									ant->prox = aux->prox;
									delete(aux);
									aux = ant->prox;
									
								}//fim else
								
							}//fim if
							
							else{
								
								ant = aux;
								aux = aux->prox;
								
							}//fim else
							
						}//fim else
						
						//contar elemento
						elemento++;
						
					}while(elemento <= quantidade);// fim do
					
					//mostrar o achado
					if(achou == 0){
						cout<<"\n Numero nao encontrado.";
					}//fim if
					else if(achou == 1){
						cout<<"\n Numero Removido.";
					}//fim else if
					else{
						cout<<"\n Numero Removido"<<achou<<" vezes.";
					}//fim else
					
				}//fim else
			
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3
			
			
			//-----------ESVAZIAR A LISTA-----------	
			
			case 5:{
				
				if(inicio == NULL){
					//a lista estava vazia
					cout<<"Lista vazia.";
				
				}//fim if 
				else {
					//a lista ja tem elementos e serao mostrados inicio-fim
					cout<<"Lista sera esvaziada.\n.";
					
					aux= inicio;
					
					do{
						
						inicio = inicio->prox;
						delete(aux);
						aux = inicio;
						
					}while(aux != fim);//fim do
					
					delete(fim);
					inicio = NULL;
						
					cout<<"Lista esvaziada.\n.";
					
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 5
			
			
			
			//-----------SAINDO PROGRAMA -----------
			
			case 6:{
				
				exit(0);
				
			}//fim case 6	
			
			break;//break so switch la de cima
		
				
		}//fim switch

			
	}while(opcao != 6);//fim do
			
}//fim main
