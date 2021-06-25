/*
2. Faça um programa que cadastre 8 funcionários. Para cada funcionário devem ser 
cadastrados nome e salário. Os dados devem ser armazenados em uma lista 
simplemente encadeada e ordenada, de forma decrescente, pelo saláriodo funcionário.
Posteriomente o programa deve mostrar:
	a) o nome do funcionário que tem o maior salário(em caso de empate mostrar todos);
	b) a média salarial de todos os funcionários juntos;
	c) aquantidade de funcionários com salário superior a um valor fornecido pelo 
	usuário. Caso nenhum funcionário satisfaça essa condição, mostrar mensagem.
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
	struct ListaFunc {
		char nome[30];
		float salario;
		ListaFunc *prox;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	ListaFunc *inicio = NULL;
	ListaFunc *fim = NULL;
	ListaFunc *aux;
	ListaFunc *ant;
	int opcao, achou, contador = 0, contador2 = 0;;
	float maiorSalario = 0, soma = 0, buscaUsuario;
	int numRepeticoes = 8; //numero de funcionarios cadastrados
	
	//----------------------------------------------------
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir funcionarios na lista.\n";
		cout<<"\n 2 - Listar os funcionarios cadastrados. \n";
		cout<<"\n 3 - Mostrar o funcionario que tem o maior salário.\n";
		cout<<"\n 4 - Mostrar a media salarial do conjunto de funcionarios.\n";
		cout<<"\n 5 - Inserir valor de salario para buscar na lista.\n";
		cout<<"\n 6 - Sair do sistema.\n";
		cout<<"\n";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR NA LISTA-----------
			case 1:{
				
				do{
					
					//nova lista
					ListaFunc *novo = new ListaFunc();
					
					//preenchendo dados do usuario
					cout<<"\nDigite a nome a ser inserido: ";
					cin>>novo-> nome;
					cout<<"\nDigite o salario a ser inserido: ";
					cin>>novo-> salario;
					
					//verificar se a lista esta vazia
					if (inicio == NULL){
			
						inicio = novo;
						fim = novo;
						novo-> prox = NULL;
						cout<<"\nPrimeiro Funcionario inserido.";       
					}//fim if
					else{
						//vai inserir respeitando a ordenacao
						ant = NULL;
						aux = inicio;
						
						while(aux != NULL && novo->salario < aux->salario){
							
							ant = aux;
							aux = aux->prox;
						}//fim while
						
						if(ant == NULL){
							//novo numero menor que todos, será inserido no inicio da lista
							novo->prox = inicio;
							inicio = novo;
							
							cout<<"\nNovo Funcionario inserido no inicio da lista.";
							
						}//fim if
						else if(aux == NULL){
							//novo numero maior que todos, será inserido no final da lista
							fim->prox = novo;
							fim = novo;
							fim->prox = NULL;
							
							cout<<"\nNovo Funcionario inserido no final da lista.";
							
						}//fim else if
						else{
							//inserido entre numeros no meio da lista
							ant->prox = novo;
							novo->prox = aux;
							
							cout<<"\nNovo Funcionario inserido no meio da lista.";
							
						}//fim else
						
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
					
					cout<<"\nLista vazia.";
				}//fim if
				
				else {//listar todos elementos da lista
					
					cout<<"\nListando Funcionarios cadastrados:";
					
					aux = inicio;
					
					while(aux != NULL){
						
						//impressao de valores no cmd
						cout<<"\n Nome: "<<aux->nome;
					    cout<<"\n Salario: "<<aux->salario;
					    cout<<"\n";
						
						aux = aux-> prox;//passa para prox elemento
						
						
					}//fim while
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
			
			//-----------MOSTRAR FUNC.s COM O MAIOR SALARIO-----------
			
			case 3:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nLista vazia.";
				}//fim if
				
				else {//todos elementos da lista
					
					cout<<"\nListando Funcionarios com maior salario:";
					
					aux = inicio;
					
					while(aux != NULL){
						
						maiorSalario = inicio->salario;
						
						if(maiorSalario == aux->salario){
							//impressao de valores no cmd
							cout<<"\n Nome: "<<aux->nome;
					    	cout<<"\n Salario: "<<aux->salario;
					    	cout<<"\n";
					    	
						}//fim if
						
						aux = aux-> prox;//passa para prox elemento
						
					}//fim while
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3
			
			//-----------MEDIA SALARIAL DO CONJUNTO DE FUNC.-----------
			
			case 4:{
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//todos elementos da lista
					
					cout<<"\n==========================================";
					cout<<"\nMedia salarial do total de funcionarios:";
					cout<<"\n==========================================";
					
					aux = inicio;
					
					while(aux != NULL){
						
						soma = soma + aux->salario;
					
						aux = aux-> prox;//passa para prox elemento
					    
					}//fim while
					
					cout<<"\n Media salarial do total de funcionarios: "<<(soma/numRepeticoes);
					
				}//fim else
							
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 4
			
			//-----------INSERIR VALOR DE SALARIO PARA BUSCA NA LISTA -----------
			
			case 5: {
				
				cout<<"\nInsira o valor de salario para buscar na lista.\n";
				cin>>buscaUsuario;
				
				//verificar se lista esta vaiza
				if(inicio == NULL){
					
					cout<<"\nlista vazia.";
				}//fim if
				
				else {//todos elementos da lista
					
					aux = inicio;
					
					while(aux != NULL){
						
						if(aux->salario > buscaUsuario){
							contador2++;
						}//fim if
					
						aux = aux-> prox;//passa para prox elemento
					    
					}//fim while
									
				}//fim else
				
				if(contador2 > 0){
					//foram encontrados
					cout<<"\nQuantidade de funcionarios com salario maior: "<<contador2;
					cout<<"\n";
					
				}//fim if
				else{
					//nao foram encontrados 
					cout<<"\nNão foram encontrados salarios maiores que sua busca.";
					cout<<"\n";
					
				}//fim else
				
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
