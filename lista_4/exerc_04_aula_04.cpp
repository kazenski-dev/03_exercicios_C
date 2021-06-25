/*
4. Faça um programa que cadastre o nome e o salário de 6 funcionários em uma lista duplamente 
encadeada e ordenada pelo salário de forma crescente. A seguir, o programa deve mostrar o nome, 
o valor do imposto e o valor a receber, ou seja, o salário menos o imposto de todos os 
funcionários cadastrados. Posteriormente, o programa deve mostrar os nomes e os salários dos 
funcionários cujos nomes comecem por uma letra digitada pelo usuário (considerar a possibilidade 
de letras maiúsculas e minúsculas). Se nenhum chuts funcionário tem o nome começado com a letra 
digitada pelo usuário, mostrar mensagem. Finalmente, o programa deve apresentar duas listagens.

a) dos nomes e salários dos funcionários por ordem crescente de salário. 
b) dos nomes e salários dos funcionários por ordem decrescente de salário.

Observação: os percentuais de imposto seguem a tabela abaixo:
------------------------------------------
Valor do salário  - Percentual de imposto
     até 850      -       ISENTO
entre 850 e 1200  -    10% do salário
de 1200 para cima -    20% do salário
------------------------------------------
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
		float imposto;		
		ListaFunc *prox;
		ListaFunc *ant;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	ListaFunc *inicio = NULL;
	ListaFunc *fim = NULL;
	ListaFunc *aux;
	ListaFunc *ant;
	int opcao, achou, contador = 0, contador2 = 0;;
	float maiorSalario = 0, soma = 0;
	int numRepeticoes = 6; //numero de funcionarios cadastrados
	char buscaUsuario;
	
	//----------------------------------------------------
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir funcionarios na lista.\n";
		cout<<"\n 2 - Aplicar imposto aos salarios. \n";
		cout<<"\n 3 - Mostrar o funcionario que tem o maior salário.\n";
		cout<<"\n 4 - Mostrar a media salarial do conjunto de funcionarios.\n";
		cout<<"\n 5 - Inserir valor de salario para buscar na lista.\n";
		cout<<"\n 6 - Sair do sistema.\n";
		cout<<"\n";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR NA LISTA-----------
			
			case 1: {
				
				//nova lista
				ListaFunc *novo = new ListaFunc();
				
				//preenchendo dados do usuario
				cout<<"\nDigite a nome a ser inserido: ";
				cin>>novo-> nome;
				cout<<"\nDigite o salario a ser inserido: ";
				cin>>novo-> salario;
				
				if(inicio == NULL){
					//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
					inicio = novo;
					fim = novo;
					novo->prox = NULL;
					novo->ant = NULL;
					
					cout<<"Primeiro funcionario inserido na lista.";
					
				} //fim if
				else{
					
					aux = inicio;
					
					while(aux != NULL && novo->salario > aux->salario){
						
						aux = aux->prox;
					}//fim while
					
					if(aux == inicio){//inserir no inicio da lista
						
						novo->prox = inicio;
						novo->ant = NULL;
						inicio->ant = novo;
						inicio = novo;
						
					}//fim if
					else if(aux == NULL){
						
						fim->prox = novo;
						novo->ant = fim;
						fim = novo;
						fim->prox = NULL;
						
					}//fim else if
					else{
						
						novo->prox = aux;
						novo->ant = aux->ant;
						aux->ant->prox = novo;
						aux->ant = novo;
						
					}//fim else
					
				}//fim else
				
				cout<<"\nNovo funcionario inserido na lista.";
								
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 1
			
			//-----------APLCIAR IMPOSTO AOS SALARIOS-----------
			
			case 2: {
				
				if(inicio == NULL){
					
					cout<<"\nLista vazia.";
					
				}//fim if
				else{
					
					cout<<"\nListando nome/valor imposto/salario com imposto.";
					
					aux = inicio;
					
					while(aux != NULL){//percorre a lista
						
						if(aux->salario > 850 && aux->salario < 1200){
							//entre 850 e 1200 >> 10% do salário
							cout<<"\nListando valor imposto\n";
							aux->imposto = aux->salario * 0.10;
							cout<<"\nImposto: R$ \n"<<aux->imposto;
							
						}//fim if
						
						else if(aux->salario >= 1200){
							//maior que 1200 >> 20% do salário
							cout<<"\nListando valor imposto\n";
							aux->imposto = aux->salario * 0.20; 
							cout<<"\nImposto: R$ \n"<<aux->imposto;
							
						}//fim else if
						else{
							//até 850 >> ISENTO
							cout<<"\nListando valor imposto\n";
							aux->imposto = 0; 
							cout<<"\nImposto: R$ \n"<<aux->imposto;
							
							
						}//fim else
						
						cout<<"\nListando os salarios com a aplicacao de impostos.\n";
						cout<<"\nNome: "<<aux->nome;
						cout<<"\nSalario base"<<aux->salario;
						cout<<"\nImposto: "<<aux->imposto;
						cout<<"\nSalario final"<<(aux->salario - aux->imposto);
						cout<<"\n";
						
						aux = aux -> prox;
						
					}//fim while
					
				}//fim else
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 2
			
			//-----------BUSCAR FUNCIONARIOS C/ NOME COMECADOS PELA LETRA-----------
			
			case 3: {
				
				char minuscula, maiuscula;
				
				//pego a letra do usuario
				cout<<"\nDigite a LETRA para buscar funcionarios.";
				cin>>buscaUsuario;
				
				minuscula = buscaUsuario;
				maiuscula = toupper(buscaUsuario);
				
				while(aux != NULL){
					//mostrar quantos a tem o nome da pessoa pela letra digitada
					if(aux->nome[0] == minuscula || aux->nome[0] == maiuscula){
						
						cout<<"Funcionario encontrado:\n";
						
						cout<<"\nListando os salarios com a aplicacao de impostos.\n";
						cout<<"\nNome: "<<aux->nome;
						cout<<"\nSalario base"<<aux->salario;
						cout<<"\nImposto: "<<aux->imposto;
						cout<<"\nSalario final"<<(aux->salario - aux->imposto);
						cout<<"\n";
						
					}//fim if
					
					aux = aux -> prox;
					
				}//fim while
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 3

			//-----------MOSTRAR ORDEM CRESCENTE DE SALARIO-----------
			
			case 4: {
				
				cout<<"\nMostrando lista ordenada de forma CRESCENTE pelo salario:\n";
					
				aux = inicio;
				
				while(aux != NULL){//percorre a lista
						
						cout<<"\nListando os salarios com a aplicacao de impostos.\n";
						cout<<"\nNome: "<<aux->nome;
						cout<<"\nSalario base"<<aux->salario;
						cout<<"\nImposto: "<<aux->imposto;
						cout<<"\nSalario final"<<(aux->salario - aux->imposto);
						cout<<"\n";
						
						aux = aux->prox;
					
				}//fim while
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 4

			//-----------MOSTRAR ORDEM DECRESCENTE DE SALARIO-----------
			
			case 5: {
				
				//a lista ja tem elementos e serao mostrados fim-inicio
				cout<<"\nMostrando lista ordenada de forma DECRESCENTE pelo salario:\n";
				
				aux = fim;
				
				while(aux != NULL){
					
					cout<<"\nListando os salarios com a aplicacao de impostos.\n";
					cout<<"\nNome: "<<aux->nome;
					cout<<"\nSalario base"<<aux->salario;
					cout<<"\nImposto: "<<aux->imposto;
					cout<<"\nSalario final"<<(aux->salario - aux->imposto);
					cout<<"\n";
					
					aux = aux->ant;
					
				}//fim while
				
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
			}//fim case 5

			//-----------SAIRDO PROGRAMA -----------
			
			case 6:{
				
				exit(0);
				
			}//fim case 4	
			
			break;//break so switch la de cima



		}//fim switch

	}while(opcao != 6);//fim do

}//fim main
