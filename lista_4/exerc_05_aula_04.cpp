/*
Faça um programa que receba 20 números e armazene os pares em uma lista simplesmente encadeada e
não ordenada e osímpares em uma segunda lista simplesmente encadeada e não orndenada.
Posteriormente o programa deve montar uma terceira lista, duplamente encadeada e orndenada
de forma crescente, os os números das duas listas anteriores. Para finalizar, o programa deve
mostrar as seguintes formas: crescente e decrescente.
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
	
	struct ListaNumeros {
		int numero;		
		ListaNumeros *prox;
	};//fim struct
	
	//declarar lista PARES
	struct ListaPares {
		int numero;		
		ListaPares *proxPar;
	};//fim struct
	
	//declarar lista IMPARES
	struct ListaImpares {
		int numero;		
		ListaImpares *proxImpar;
	};//fim struct
	
	//declarar lista TODOS NUMEROS
	struct ListaTotal {
		int numero;		
		ListaTotal *proxTotal;
		ListaTotal *antTotal;
	};//fim struct
	
	//----------------------------------------------------
	//inicializar lista com inicio, fim e aux para percorrer
	
	ListaNumeros *inicio = NULL;
	ListaNumeros *fim = NULL;
	ListaNumeros *aux;
	
	ListaPares *inicioPar = NULL;
	ListaPares *fimPar = NULL;
	ListaPares *auxPar;
	
	ListaImpares *inicioImpar = NULL;
	ListaImpares *fimImpar = NULL;
	ListaImpares *auxImpar;
	
	ListaTotal *inicioTotal = NULL;
	ListaTotal *fimTotal = NULL;
	ListaTotal *auxTotal;
	ListaTotal *antTotal;
	
	int opcao, contador = 0, copia;
	int numRepeticoes = 6; //numero de numeros cadastrados
	
	//----------------------------------------------------
	//criar meu menu de opcoes
	do{
		system("cls");
		cout<<"\n Menu de opcoes:\n";
		cout<<"\n 1 - Inserir numeros.\n";
		cout<<"\n 2 - Listar a lista de pares. \n";
		cout<<"\n 3 - Listar a lista de pares.\n";
		cout<<"\n 4 - Listar a lista total.\n";
		cout<<"\n 5 - Sair do sistema.\n";
		cout<<"\n";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------INSERIR NA LISTA-----------
			
			case 1: {
				
				do{
					//nova lista em branco
					ListaNumeros *novo = new ListaNumeros();
					
					//nova lista PAR
					ListaPares *novoPar = new ListaPares();
					
					//nova lista IMPAR
					ListaImpares *novoImpar = new ListaImpares();
					
					//nova lista TOTAL
					ListaTotal *novoTotal = new ListaTotal();
					
					//preenchendo dados do usuario
					cout<<"\nDigite a numero a ser inserido: ";
					cin>>novo-> numero;
					
					copia = novo->numero;
					
					if(copia %2 == 0){
						//é par, vou salvar em uma lista par
						
						//verificar se a lista esta vazia
						if (inicioPar == NULL){
				
							inicioPar = copia;
							fimPar = copia;
							fimPar -> proxPar = NULL;
							cout<<"\nPrimeiro numero PAR inserido.";       
						}//fim if
						else{
							
							fimPar-> proxPar = copia;
							novo-> proxPar = NULL;
							fimPar = copia;
							cout<<"\nNovo numero PAR inserido na lista.";
						}//fim else
							
					}//fim if
					else{
						//é impar, vou salvar em uma lista impar
						
						//verificar se a lista esta vazia
						if (inicioImpar == NULL){
				
							inicioImpar = copia;
							fimImpar = copia;
							fimImpar -> proxImpar = NULL;
							cout<<"\nPrimeiro numero IMPAR inserido.";       
						}//fim if
						else{
							
							fimImpar-> proxImpar = copia;
							novo-> proxImpar = NULL;
							fimImpar = copia;
							cout<<"\nNovo numero IMPAR inserido na lista.";
						}//fim else
						
					}// fim else
					
					
					
					
					
					cout<<"\nNovo numero inserido na lista.";
								
					cout<<"\nDigite enter para voltar ao menu principal.";
					getch(); //teclar algo para continuar
					
					contador++;
				
				}while(contador < numRepeticoes);//fim do
				
				break;
				
			}//fim case 1
			
			//-----------LISTAR PARES-----------
			
			case 2:{
				
				break;
			}//fim case 2



			//-----------LISTAR IMPARES-----------
			
			case 3:{
				
				break;
			}//fim case 3



			//-----------LISTAR TOTAL-----------
			
			case 4:{
				
				break;
			}//fim case 4


			//-----------SAIRDO PROGRAMA -----------
			
			case 5:{
				
				exit(0);
				
			}//fim case 5	
			
			break;//break do switch la de cima

		}//fim switch

	}while(opcao != 6);//fim do

}//fim main
