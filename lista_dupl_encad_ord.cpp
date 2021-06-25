//LISTA DUPLAMENTE ENCADEADA ORDENADA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<conio.h>
#include<iostream>
#include<time.h>

using namespace std;

void main(){
	
	//Definindo cada elemento
	struct LISTA {	
	
		int numero;
		LISTA *proximo;
		LISTA *anterior;
	};
	
	//Pra nao pegar lixo de memoria iniciamos com NULL
	clrscr();
	LITA *inicio = NULL;
	LISTA *fim = NULL;
	LISTA *auxiliar;
	
	int opcao, numero, achou;
	
	//Menu de opcoes
	do{
		
		cout<<"\n ------------------------------------";
		cout<<"\n MENU DE OPCOES:";
		cout<<"\n [1] INSERIR VALOR NA LISTA";
		cout<<"\n [2] CONSULTAR LISTA INICIO-FIM";
		cout<<"\n [3] CONSULTAR LISTA FIM-INICIO";
		cout<<"\n [4] REMOVER DA LISTA";
		cout<<"\n [5] ESVAZIAR A LISTA";
		cout<<"\n [6] SAIR";
		cout<<"\n ------------------------------------";
		cin >>opcao;
		
		//se OPCAO == INVALIDA
		if ((opcao <1) || (opcao>6)){
			
			cout <<"Opcao invalida.";
			getch();
			clrscr();
		}
		
		//se OPCAO == [1] INSERIR VALOR NA LISTA
		if (opcao == 1){
			
			getch();
			clrscr();
			
			cout<<"Digite o numero a ser inserido no inicio da lista: ";
			LISTA *novo=new LISTA();
			cin>>novo->numero;
			
			if(inicio == NULL){
				//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
				inicio = novo;
				fim = novo;
				novo->proximo = NULL;
				novo->anterior = NULL;
			} 
			else {
				//a lista ja tem elementos, e o novo sera o primeiro
				novo->proximo = inicio;
				inicio->anterior = novo;
				novo->anterior = NULL;
				inicio = novo;
			}
			cout<<"Numero inserido no final da lista.";
		}
		
		//se OPCAO == [2] CONSULTAR LISTA INICIO-FIM
		if (opcao == 2){
			
			getch();
			clrscr();
			
			if(inicio == NULL){
				//a lista estava vazia
				cout<<"Lista vazia.";
			} 
			else {
				//a lista ja tem elementos e serao mostrados inicio-fim
				cout<<"Consultando do inicio ao fim da lista ...";
				auxiliar = inicio;
				
				while(auxiliar != NULL){
					
					cout<<auxiliar->numero<<" ";
					auxiliar = auxiliar->proximo;
				}
			}
		
		}
		
		//se OPCAO == [3] CONSULTAR LISTA FIM-INICIO
		if (opcao == 3){
			
			getch();
			clrscr();
			
			if(inicio == NULL){
				//a lista estava vazia
				cout<<"Lista vazia.";
			} 
			else {
				//a lista ja tem elementos e serao mostrados fim-inicio
				cout<<"Consultando do fim ao inicio da lista ...";
				auxiliar = fim;
				
				while(auxiliar != NULL){
					
					cout<<auxiliar->numero<<" ";
					auxiliar = auxiliar->anterior;
				}
			}
		
		}
		
		//se OPCAO == [4] REMOVER DA LISTA
		if (opcao == 4){
			
			getch();
			clrscr();
			
			if(inicio == NULL){
				//a lista estava vazia
				cout<<"Lista vazia.";
			} 
			else {
				//a lista ja tem elementos e o elemento a ser deletado deve ser digitado
				cout<<"Digite o elemento a ser removido: ";
				cin>>numero;
				
				auxiliar = inicio;
				achou = 0;
				
				while(auxiliar != NULL){
					
					if (auxiliar->numero == numero){
						//o numero digitado foi encontrado e sera removido da lista
						achou++;
						
						if(auxiliar == inicio){
							//o numero a ser removido e o primeiro da lista
							inicio = auxiliar->proximo;
							
							if(inicio != NULL){
								inicio->anterior = NULL;
							}
							//FAZER DAQUI EM DIANTE
						}
						
					}
				}
			}
		
		}
		
	}//fim DO
	
	
	
}
