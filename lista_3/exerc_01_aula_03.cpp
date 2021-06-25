/*Exercício LISTA 3 AULA 3 - 
1. Faça um programa que cadastre 5 produtos. Para cada produto devem ser cadastrados 
código do produto,preço e quantidae estocada. Os dados devem ser armazenados em 
uma lista semplesmente encadeada não ordenada. Posteriormente, receber do usuário 
a taxa de desconto (ex: digitar 10 para a taxa de 10%).Aplicar ao preço de todos 
produtos cadastrasdos e finalmente mostrar um relatório com o código e novo
preço. O final desse relatório deve apresentar também a quantidade de produtos 
com quantidade estocada superior a 500.
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
	struct ListaProdutos {
		char codigo[30];
		float preco;
		int qtdEstoque;		
		ListaProdutos *prox;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	ListaProdutos *inicio = NULL;
	ListaProdutos *fim = NULL;
	ListaProdutos *aux;
	ListaProdutos *ant;
	int opcao, qtdSuperior = 0, contador = 0;
	float taxa;
	int numRepeticoes = 5; //numero de produtos cadastrados
	
	//----------------------------------------------------
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir na lista.\n";
		cout<<"\n 2 - Listar a lista. \n";
		cout<<"\n 3 - Inserir taxa de desconto.\n";
		cout<<"\n 4 - Relatorio atualizado.\n";
		cout<<"\n 5 - Sair do sistema.\n";
		cout<<"\n";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR NA LISTA-----------
			case 1:{
				
				do{
					
					//nova lista
					ListaProdutos *novo = new ListaProdutos();
					
					//preenchendo dados do usuario
					cout<<"\nDigite a codigo a ser inserida: ";
					cin>>novo-> codigo;
					cout<<"\nDigite o preco a ser inserida: ";
					cin>>novo-> preco;
					cout<<"\nDigite a qtdEstoque a ser inserida: ";
					cin>>novo-> qtdEstoque;
					
					//verificar se a lista esta vazia
					if (inicio == NULL){
			
						inicio = novo;
						fim = novo;
						fim-> prox = NULL;
						cout<<"\nPrimeiro Produto inserido.";       
					}//fim if
					else{
						
						fim-> prox = novo;
						fim = novo;
						novo-> prox = NULL;
					
						cout<<"\nNovo Produto inserido na lista.";
					}//fim else
					
					cout<<"\nDigite enter para voltar ao menu principal.";
					getch(); //teclar algo para continuar
					
					contador++;
					
				}while(contador < numRepeticoes);//fim do
				
				break;
				
			}//fim case 1
			
			//-----------LISTAR A LISTA-----------
			
			case 2:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//listar todos elementos da lista
					
					cout<<"\nListando Produtos cadastrados:";
					
					aux = inicio;
					
					while(aux != NULL){
						
						//impressao de valores no cmd
						cout<<"\n Codigo: "<<aux->codigo;
					    cout<<"\n Preco: "<<aux->preco;
					    cout<<"\n Quantidade Estocada: "<<aux->qtdEstoque;
					    cout<<"\n";
						
						aux = aux-> prox;//passa para prox elemento
						
						
					}//fim while
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
			
			//-----------INSERIR TAXA DE DESCONTO-----------
			
			case 3:{
				
				cout<<"\nInsira a porcentagem desejada.\n";
				cout<<"\n - Exemplo: digite 10 para 10%.- \n";
				cin>> taxa;
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//aplicar a todos elementos da lista
					
					cout<<"\nAplicando TAXA aos Produtos cadastrados:\n";
					
					aux = inicio;
					
					while(aux != NULL){
						
						//impressao de valores no cmd
						aux->preco = aux->preco - aux->preco * (taxa/100);
						
						aux = aux-> prox;//passa para prox elemento
						
					}//fim while
					
					cout<<"\nTaxa aplicada com sucesso.\n";
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3
			
			//-----------RELATORIO ATUALIZADO-----------
			
			case 4:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nLista vazia.";
				}//fim if
				
				else {//todos elementos da lista
					
					cout<<"\n==========================================";
					cout<<"\nRelatorio FINAL de Produtos cadastrados:";
					cout<<"\n==========================================";
					
					aux = inicio;
					
					while(aux != NULL){
						
						//impressao de valores no cmd
						cout<<"\n Codigo: "<<aux->codigo;
					    cout<<"\n Preco: "<<aux->preco;
					    cout<<"\n Quantidade Estocada: "<<aux->qtdEstoque;
					    cout<<"\n";
						
						if(aux->qtdEstoque > 500){
							qtdSuperior++;
						}
						
						aux = aux-> prox;//passa para prox elemento
						
					}//fim while
					
					cout<<"\n==================================================";
					cout<<"\n Produtos com estoque acima de 500: "<<qtdSuperior;
					cout<<"\n==================================================";
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}
			
			//-----------SAIRDO PROGRAMA -----------
			
			case 5:{
				
				exit(0);
				
			}//fim case 5	
			
			break;//breakdso switch la de cima
		
		//----------------------------------------------------	
			
		}//fim switch
		
	//----------------------------------------------------
		
	}while(opcao != 5);//fim do

//----------------------------------------------------		
	
}//fim main
