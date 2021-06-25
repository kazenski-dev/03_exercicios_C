//LISTA DUPLAMENTE ENCADEADA NAO ORDENADA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include<conio.h>
#include<iostream>
#include<time.h>

using namespace std;

int main(){
	
	//Definindo cada elemento
	struct LISTA {	
	
		int numero;
		LISTA *proximo;
		LISTA *anterior;
	};
	
	//Pra nao pegar lixo de memoria iniciamos com NULL
	LISTA *inicio = NULL;
	LISTA *fim = NULL;
	LISTA *auxiliar;
	
	int opcao, numero, achou;
	
	//Menu de opcoes
	do{
		
		cout<<"\n ------------------------------------";
		cout<<"\n MENU DE OPCOES:";
		cout<<"\n [1] INSERIR VALOR NO INICIO DA LISTA";
		cout<<"\n [2] INSERIR VALOR NO FINAL DA LISTA";
		cout<<"\n [3] CONSULTAR LISTA INICIO-FIM";
		cout<<"\n [4] CONSULTAR LISTA FIM-INICIO";
		cout<<"\n [5] REMOVER DA LISTA";
		cout<<"\n [6] ESVAZIAR A LISTA";
		cout<<"\n [7] SAIR";
		cout<<"\n ------------------------------------";
		cin >>opcao;
		
		//se OPCAO == INVALIDA
		if ((opcao <1) || (opcao>7)){
			
			cout <<"Opcao invalida.";
			getch();
		}
		
		//se OPCAO == [1] INSERIR VALOR NO INICIO DO VETOR
		if (opcao == 1){
			
			getch();
			
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
		
		//se OPCAO == [2] INSERIR VALOR NO FINAL DO VETOR
		if (opcao == 2){
			
			getch();
			
			cout<<"Digite o numero a ser inserido no fim da lista: ";
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
				//a lista ja tem elementos, e o novo sera o ultimo
				fim->proximo = novo;
				novo->anterior = fim;
				novo->proximo = NULL;
				fim = novo;
			}
			cout<<"Numero inserido no final da lista.";
		}
		
		//se OPCAO == [3] CONSULTAR LISTA INICIO-FIM
		if (opcao == 3){
			
			getch();
			
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
		
		//se OPCAO == [4] CONSULTAR LISTA FIM-INICIO
		if (opcao == 4){
			
			getch();
			
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
		
		//se OPCAO == [5] REMOVER DA LISTA
		if (opcao == 5){
			
			getch();
			
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
							delete(auxiliar);
							auxiliar = inicio;
							
						}
						else if(auxiliar == fim){//remover no final da lista
								fim = fim->anterior;
								fim->proximo = NULL;
						     	delete(auxiliar);
						     	auxiliar = NULL;
						} 
						else {//remover no meio da lista
							 auxiliar->anterior->proximo = auxiliar->proximo;
							 auxiliar->proximo->anterior = auxiliar->anterior;
							 LISTA *auxiliar2;
							 auxiliar2 = auxiliar->proximo;
							 delete(auxiliar);
							 auxiliar = auxiliar2; 
						}
					}
					else{
						auxiliar=auxiliar->proximo; 
					}
				
				    if(achou ==0 ) {
				    	cout<<"\n Número não encontrado ";
					}
					else if (achou ==1){
					 	cout<<"\n Número removido uma Vez ";
					}
					else {
					 	cout<<"\n Número removido"<<achou<<"Vezes";
					}
				 		
					cout<<"\n digite enter para voltar ao menu ";
				    getch();	 	
				}
						
			}
		}
		
		//se OPCAO == [6] ESVAZIAR A LISTA
		if (inicio == NULL ){ //vefiricar se a lista esta vazia
	
			cout<<"\n Lista vazia ";
		}
		else{ 
		       
			auxiliar=inicio;   
	    	while (auxiliar != NULL){	//percorrer a lista endereço por endereço até final lista
	        inicio =inicio->proximo;
	        delete(auxiliar);
	        auxiliar =inicio;}
	      
	        cout<<"\n Lista Esvaziada ";
	        cout<<"\n digite enter para voltar ao menu ";
		    getch();
		   
		}
		
	} while(opcao != 7);
		
}
