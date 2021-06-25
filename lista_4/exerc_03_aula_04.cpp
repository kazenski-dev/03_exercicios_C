/*
3. Faça um programa que cadastre 5 alunos. Para cada aluno devem ser cadastrados nome e nota final.
Os dados devem ser armazenados em uma lista duplamente encadeada e não ordenada Em seguida, o 
programa deve mostrar apenas o nome dos alunos aprovados, ou seja, alunos com nota final de no 
mínimo 7. Se nenhum aluno estiver aprovado. mostrar mensagem.
*/

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
		char nome[30];
		float nota;		
		ListaAlunos *prox;
		ListaAlunos *ant;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	ListaAlunos *inicio = NULL;
	ListaAlunos *fim = NULL;
	ListaAlunos *aux;
	ListaAlunos *ant;
	int opcao, achou = 0;
	
	//----------------------------------------------------
	
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir no inicio da lista.\n";
		cout<<"\n 2 - Inserir no fim da lista.\n";
		cout<<"\n 3 - Mostrar alunos aprovados.\n";
		cout<<"\n 4 - Sair do sistema.\n";
		cout<<"\n->";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR ALUNO NO INICIO DA LISTA-----------
			
			case 1: {
					
				//nova lista
				ListaAlunos *novo = new ListaAlunos();
		
				//preenchendo dados do usuario
				cout<<"\nDigite a nome a ser inserido: ";
				cin>>novo-> nome;
				cout<<"\nDigite a nota a ser inserida: ";
				cin>>novo-> nota;
				
				if(inicio == NULL){
					//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
					inicio = novo;
					fim = novo;
					novo->prox = NULL;
					novo->ant = NULL;
					
					cout<<"Primeiro aluno inserido na lista.";
					
				} //fim if
				else {
					//a lista ja tem elementos, e o novo sera o primeiro
					novo->prox = inicio;
					inicio->ant = novo;
					novo->ant = NULL;
					inicio = novo;
					
					cout<<"Aluno inserido no inicio da lista.";
					
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 1
			
			//-----------INSERIR ALUNO NO FINAL DA LISTA-----------
				
			case 2: {

				//nova lista
				ListaAlunos *novo = new ListaAlunos();
		
				//preenchendo dados do usuario
				cout<<"\nDigite a nome a ser inserido: ";
				cin>>novo-> nome;
				cout<<"\nDigite a nota a ser inserida: ";
				cin>>novo-> nota;
				
				if(inicio == NULL){
					//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
					inicio = novo;
					fim = novo;
					novo->prox = NULL;
					novo->ant = NULL;
					
					cout<<"Primeiro aluno inserido na lista.";
				}//fim if
				else {
					//a lista ja tem elementos, e o novo sera o ultimo
					fim->prox = novo;
					novo->ant = fim;
					novo->prox = NULL;
					fim = novo;
					
					cout<<"Numero inserido no final da lista.";
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
				
			//-----------MOSTRAR ALUNOS APROVADOS-----------	
			
			case 3: {
				
				if(inicio == NULL){
					//a lista estava vazia
					cout<<"Lista vazia.";
				
				}//fim if 
				else {
					//a lista ja tem elementos e serao mostrados inicio-fim
					cout<<"Consultando do inicio ao fim da lista ..\n.";
					
					aux = inicio;
					
					while(aux != NULL){
						
						if(aux->nota >=7){//condicao de aprovacao
							
							//impressao de valores no cmd
							cout<<"\nAluno aprovado:";
							cout<<"\nNome: "<<aux->nome;
						    cout<<"\n";
						    achou++;
						}//fim if
						
						aux = aux-> prox;//passa para prox elemento
						
					}//fim while
					
					if(achou == 0){
						cout<<"\nNenhum aluno aprovado.";
					}//fim if
					
				}//fim else
			
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3
			
			//-----------SAIRDO PROGRAMA -----------
			
			case 4:{
				
				exit(0);
				
			}//fim case 4	
			
			break;//break so switch la de cima
		
				
		}//fim switch

			
	}while(opcao != 4);//fim do
			
}//fim main
