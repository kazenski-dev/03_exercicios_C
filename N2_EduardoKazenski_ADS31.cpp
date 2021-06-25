/*
1 – Desenvolva um programa em uma linguagem de programação que realize
as seguintes funcionalidades conforme este menu de opções:

1 – Lista simplesmente encadeada dinâmica com números inteiros;
1.1 – Inserir elementos na lista;
1.2 - Ordenar a lista;
1.3 - Listar a lista
1.4 - Remover elemento da lista;
1.5 - Retornar ao Menu Principal;
---------------------------------------
2 – Lista duplamente encadeada ordenada dinâmica com números inteiros;
2.1 – Inserir elementos na lista;
2.2 - Listar a lista;
2.3 - Remover elemento da lista;
2.4 - Esvaziar a Lista;
2.5 - Retornar ao Menu Principal;
--------------------------------------
3 – Lista Circular simplesmente encadeada dinâmica com caracteres do
alfabeto;
3.1 - Inserir elementos na lista;
3.2 - Listar a lista;
3.3 - Remover elemento da lista;
3.4 - Ordenar a Lista;
3.5 - Retornar ao Menu Principal;
4 – Sair do Sistema.
*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<string.h>

using namespace std; //comandos de c e c++

main(){
	
	//------------DECLARACOES E INICIALIZACOES--------------
	
	int opcao;//usada para selecao de opcao no menu
	//----------------------------------------------------
	
	//criar meu menu PRINCIPAL de opcoes
	do{
		system("cls");
		cout<<"\nVoce esta aqui: Menu Principal > \n\n";
		cout<<"\nMenu de Primcipal:\n";
		cout<<"\n 1 - Lista simplesmente encadeada dinâmica com números inteiros.\n";
		cout<<"\n 2 - Lista duplamente encadeada ordenada dinâmica com números inteiros. \n";
		cout<<"\n 3 - Lista Circular simplesmente encadeada dinâmica com o alfabeto.\n";
		cout<<"\n 4 – Sair do Sistema.\n";
		cout<<"\n >> ";
		cin>>opcao; //leitura da opcao
		
		switch(opcao){
			
			//-----------SIMPLESMENTE ENCADEADA-----------
			case 1:{
				
				//------------DECLARACOES E INICIALIZACOES--------------
				//declarar lista de inteiros
				struct ListaInteiros {
					int numero;	
					ListaInteiros *prox;
				};//fim struct
				
				//inicializar lista com inicio, fim e aux para percorrer
				ListaInteiros *inicio = NULL;
				ListaInteiros *fim = NULL;
				ListaInteiros *aux;
				ListaInteiros *ant;
				ListaInteiros *menor;
				int achou = 0;
				int contador = 0;//usada para selecao de opcao no menu
				int numRepeticoes = 0; //numero de produtos cadastrados
				int numRemovido = 0; //numero escolhido pelo usuario a ser removido
				//----------------------------------------------------
				
				//cpturo o numero de insercoes que o usuario deseja inserir
				cout<<"\nDigite a quantidade de numeros que deseja inserir inicialmente:";
				cout<<"\n >> ";
				cin>>numRepeticoes; //leitura das repeticoes
				
				//---------------------CODE---------------------------
				do{
					
					system("cls");
					cout<<"\nVoce esta aqui: Menu Principal > Simplesmente Ecadeada \n\n";
					cout<<"\n Menu Simplesmente Encadeada:\n";
					cout<<"\n 1 - Inserir elementos na lista.\n";
					cout<<"\n 2 - Ordenar a lista. \n";
					cout<<"\n 3 - Listar a lista.\n";
					cout<<"\n 4 - Remover elemento da lista.\n";
					cout<<"\n 5 - Retornar ao Menu Principal.\n";
					cout<<"\n >> ";
					cin>>opcao; //leitura da opcao
					
					switch(opcao){
			
						//-----------Inserir elementos na lista-----------
						case 1:{
								
							do{
								system("cls");
								
								//nova lista
								ListaInteiros *novo = new ListaInteiros();
								
								//preenchendo dados do usuario
								cout<<"\nDigite a numero a ser inserido:";
								cout<<"\n >> ";
								cin>>novo-> numero;
								
								//verificar se a lista esta vazia
								if (inicio == NULL){
						
									inicio = novo;
									fim = novo;
									fim-> prox = NULL;
									cout<<"\nPrimeiro numero inserido.\n";       
								}//fim if
								else{
									
									fim-> prox = novo;
									fim = novo;
									fim-> prox = NULL;
									cout<<"\nNovo numero inserido na lista.\n";
								}//fim else
								
								cout<<"\nDigite enter para INSERIR novamente.\n";
								getch(); //teclar algo para continuar
								
								contador++;
								
							}while(contador < numRepeticoes);//fim do
							
							cout<<"\nDigite enter para voltar ao menu -Simplesmente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
						}
					
						//-----------Ordenar a lista-----------
						case 2:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else {//vou ordenar agora
							
								//code
								
								//nao consegui implementar
								cout<<"Funcao ainda nao implementada com ponteiro.";
							
							
							}//fim else
								
							cout<<"\nDigite enter para voltar ao menu -Simplesmente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
						}
						
						//-----------Listar a lista-----------
						case 3:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else {//listar todos elementos da lista
								
								cout<<"\nListando numeros inseridos:";
								
								aux = inicio;
								
								while(aux != NULL){
									
									//impressao de valores no cmd
									cout<<"\n> "<<aux->numero;
									
									aux = aux-> prox;//passa para prox elemento
									
								}//fim while
								
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Simplesmente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
						}
						
						//-----------Remover elemento da lista-----------
						case 4:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							else{
								
								cout<<"\nDigite o numero que deseja ser removido:";
								cout<<"\n >> ";
								cin>>numRemovido;
								
								aux = inicio;
								ant = NULL;
								
								while(aux != NULL){
									
									if(aux->numero == numRemovido){
										
										achou++;
										
										if(aux == inicio){
											
											inicio = aux->prox;
											delete(aux);
											aux = inicio;
											cout<<"\nNumero removido do inicio da lista.\n";
											
										}//fim if
										else if(aux == fim){
											
											ant->prox = NULL;
											fim = ant;
											delete(aux);
											aux = NULL;
											cout<<"\nNumero removido do final da lista.\n";
											
										}//fim else if
										else{
											
											ant->prox = aux->prox;
											delete(aux);
											aux = ant->prox;
											cout<<"\nNumero removido do meio da lista.\n";
											
										}//fim else
										
									}//fim if
									else{
										
										ant = aux;
										aux = aux->prox;
										
									}//fim else
									
								}//fim while
								
								if(achou == 0){
									
									cout<<"Numero nao encontrado";
								}//fim if
								else if(achou == 1){
									
									cout<<"Numero removido 1 vez.";
								}//fim else if
								else{
									
									cout<<"Numero removido "<<achou<<" vezes.";
								}//fim else
								
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Simplesmente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
						}
						
						//-----------Retornar ao Menu Principal-----------
						case 5:{
							
							system("cls");
							
							cout<<"\nDigite enter para voltar ao menu -Menu Principal-";
							getch(); //teclar algo para continuar
							
							break;
						}
					
					}//fim switch simpl enc
					
				}while(opcao != 5);//fim do
				
				break;
				
			}//fim case 1
			
			//-----------DUPLAMENTE ENCADEADA-----------
			case 2:{
												
				//------------DECLARACOES E INICIALIZACOES--------------
				//Definindo cada elemento
				struct Lista {	
					int numero;
					Lista *prox;
					Lista *ant;
				};
				//Pra nao pegar lixo de memoria iniciamos com NULL
				Lista *inicio = NULL;
				Lista *fim = NULL;
				Lista *aux;
				int opcao, buscaNumero, numRepeticoes = 0, achou, contador = 0;
				
				//cpturo o numero de insercoes que o usuario deseja inserir
				cout<<"\nDigite a quantidade de numeros que deseja inserir inicialmente:";
				cout<<"\n >> ";
				cin>>numRepeticoes; //leitura das repeticoes
				
				
				//---------------------CODE---------------------------
				do{
					
					system("cls");
					cout<<"\nVoce esta aqui: Menu Principal > Duplamente Ecadeada \n\n";
					cout<<"\n Menu Duplamente Encadeada:\n";
					cout<<"\n 1 - Inserir elementos na lista.\n";
					cout<<"\n 2 - Listar a lista.\n";
					cout<<"\n 3 - Remover elemento da lista.\n";
					cout<<"\n 4 - Esvaziar a lista.\n";
					cout<<"\n 5 - Retornar ao Menu Principal.\n";
					cout<<"\n >> ";
					cin>>opcao; //leitura da opcao
					
					switch(opcao){
			
						//-----------Inserir elementos na lista-----------
						case 1:{
							
							do{
							
								system("cls");
								
								//nova lista
								Lista *novo = new Lista();
						
								//preenchendo dados do usuario
								cout<<"\nDigite o numero a ser inserido:";
								cout<<"\n >> ";
								cin>>novo-> numero;
							
								if(inicio == NULL){
									//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
									inicio = novo;
									fim = novo;
									novo->prox = NULL;
									novo->ant = NULL;
									
									cout<<"Primeiro numero inserido na lista.";
									
								}//fim if
								
								else {
									//a lista ja tem elementos, e o novo sera o ultimo
									fim->prox = novo;
									novo->ant = fim;
									novo->prox = NULL;
									fim = novo;
									
									cout<<"Novo numero inserido na lista.";
									
								}//fim else
								
								cout<<"\nDigite enter para INSERIR novamente.\n";
								getch(); //teclar algo para continuar
							
								contador++;
							
							}while(contador < numRepeticoes);//fim do
							
							cout<<"\nDigite enter para voltar ao menu -Duplamente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 1
						
						//-----------Listar a lista-----------
						case 2:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
						
							else {
								//a lista ja tem elementos e serao mostrados inicio-fim
								cout<<"\nConsultando do inicio ao fim da lista .\n";
								
								aux = inicio;
								
								while(aux != NULL){
									
									//impressao de valores no cmd
									cout<<"\n > "<<aux->numero;
									aux = aux-> prox;//passa para prox elemento
									
								}//fim while
								
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Duplamente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 2
						
						//-----------Remover elemento da lista-----------
						case 3:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else{
								
								cout<<"\n Removendo elementos da Lista.";
							    cout<<"\n Digite o número a ser removido da lista:";
							    cout<<"\n >> ";
							    cin>>buscaNumero;
							    
							    aux=inicio;
							    achou=0;
							    
							    while (aux != NULL){
							    	
								    if(aux-> numero == buscaNumero){
								    	achou++;
								    	
									    if(aux == inicio){ //remover no inicio da lista
									     	inicio=aux-> prox;
									     	
										    if(inicio != NULL){
										     	inicio-> ant=NULL;
										    }//fim if
										    
									     	delete(aux);
									     	aux=inicio;
								     	
								     	}//fim if
								    	
										else{
											
									    	if(aux == fim){ //remover no final da lista
										     	fim = fim-> ant;
												fim-> prox = NULL;
										     	delete(aux);
										     	aux = NULL;
										     	
										 	}//fim if
										 	
								     		else{   //remover no meio da lista
								     	    
												 aux-> ant-> prox = aux-> prox;
												 aux-> prox-> ant = aux-> ant;
												 Lista *aux2;
												 aux2 = aux-> prox;
												 delete(aux);
												 aux = aux2; 
												 
											}//fim else
											   	
								     	}//fim else
								     	
								    }//fim if
								    
								    else{
								    	aux = aux->prox;
										 
									}//fim else
								     	
								}//fim while
							    						
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Duplamente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 3
						
						//-----------Esvaziar a lista-----------
						case 4:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else{
								
								aux=inicio;  
								 
							    while (aux != NULL){
								    //percorrer a lista endereço por endereço até final lista
								    inicio = inicio-> prox;
								    delete(aux);
								    aux = inicio;
							      
								}//fim while
							      
							    cout<<"\n Lista Esvaziada.";
								
							}//fim else
							
							
							cout<<"\nDigite enter para voltar ao menu -Duplamente Encadeada-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 4
						
						//-----------Retornar ao Menu Principal-----------
						case 5:{
							
							system("cls");
							
							cout<<"\nDigite enter para voltar ao menu -Menu Principal-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 5
						
					}//fim switch
		
				}while(opcao != 5);//fim do
				
				break;
				
				
			}//fim case 2
			
			//-----------CIRCULAR SIMPLESMENTE ENCADEADA-----------
			
			case 3:{
				
				//code
				
				//------------DECLARACOES E INICIALIZACOES--------------
				//Definindo cada elemento
				struct Lista{
				  char letra;
				  Lista *prox;		
				};
				
				Lista *inicio = NULL;
				Lista *fim = NULL;
				Lista *aux;
				Lista *ant;
				
				char letraUser;
				int op,numero,achou;
				
				//---------------------CODE---------------------------
				do{
					
					system("cls");
					cout<<"\nVoce esta aqui: Menu Principal > Duplamente Ecadeada \n\n";
					cout<<"\n Menu Duplamente Encadeada:\n";
					cout<<"\n 1 - Inserir elementos na lista.\n";
					cout<<"\n 2 - Listar a lista.\n";
					cout<<"\n 3 - Remover elemento da lista.\n";
					cout<<"\n 4 - Ordenar a lista.\n";
					cout<<"\n 5 - Retornar ao Menu Principal.\n";
					cout<<"\n >> ";
					cin>>opcao; //leitura da opcao
					
					switch(opcao){
			
						//-----------Inserir elementos na lista-----------
						case 1:{
							
							system("cls");
							
							//nova lista
							Lista *novo = new Lista();
					
							//preenchendo dados do usuario
							cout<<"\nDigite a letra a ser inserida: ";
							cout<<">> ";
							cin>>novo-> letra;
							
							if(inicio == NULL){
								//a lista estava vazia e o elemento inserido sera o primeiro e ultimo
								inicio = novo;
								fim = novo;
								fim->prox = inicio;
								
								cout<<"Primeira letra inserida na lista.";
								
							}//fim if
							
							else {
								//a lista ja tem elementos, e o novo sera o ultimo
								fim->prox = novo;
								fim = novo;
								fim->prox = inicio;
								
								cout<<"Letra inserida no final da lista.";
								
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Menu Circular-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 1
						
						//-----------Listar a lista-----------
						case 2:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else {
								//a lista ja tem elementos e serao mostrados inicio-fim
								cout<<"Consultando a lista.\n";
								
								aux = inicio;
								
								do{
									cout<<aux-> letra;
									cout<<"\n";
									aux = aux-> prox;//passa para prox elemento
									
								}while(aux != inicio);//fim while
								
							}//fim else
							
							cout<<"\nDigite enter para voltar ao menu -Menu Circular-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 2
						
						//-----------Remover elemento da lista-----------
						case 3:{
							
							system("cls");
							
							//verificar se lista esta vaiza
							if(inicio == NULL){
								
								cout<<"\nLista vazia.";
							}//fim if
							
							else {
								//a lista ja tem elementos e serao mostrados inicio-fim
								cout<<"Digite a letra a ser localizada e deletada.\n";
								cout<<">> ";
								cin>>letraUser;
								
								aux = inicio;
								ant = NULL;
								achou = 0;
								
								int quantidade = 0, elemento = 0;
								
								do{
									//saber quantos elementos tem na lista
									quantidade++;
									aux = aux->prox;
										
								}while(aux != inicio);//fim do
							
								do{
									//se a lista tem apenas um elemento na lista
									if(inicio == fim && inicio-> letra == letraUser){
										
										delete(inicio);
										inicio = NULL;
										achou++;
										
									}//fim if
									else{
										
										if(aux-> letra == letraUser){
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
									cout<<"\n Letra nao encontrada.";
								}//fim if
								else if(achou == 1){
									cout<<"\n Letra Removida.";
								}//fim else if
								else{
									cout<<"\n Letra Removida"<<achou<<" vezes.";
								}//fim else
								
							}//fim else
							
							
							cout<<"\nDigite enter para voltar ao menu -Menu Circular-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 3
						
						//-----------Ordenar a lista-----------
						case 4:{
							
							system("cls");
							
							//ainda nao feito
							cout<<"Funcao ainda nao implementada.";
							
							cout<<"\nDigite enter para voltar ao menu -Menu Circular-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 4
						
						//-----------Retornar ao Menu Principal-----------
						case 5:{
							
							system("cls");
							
							cout<<"\nDigite enter para voltar ao menu -Menu Principal-";
							getch(); //teclar algo para continuar
							
							break;
							
						}//fim case 5
						
					}//fim switch
		
					
					
				}while(opcao != 5);//fim do//fim do
			
				cout<<"\nDigite enter para voltar ao menu principal.";
				getch(); //teclar algo para continuar
				
				break;
				
			}//fim case 3
			
			//-----------SAIR DO SISTEMA-----------
			
			case 4:{
				
				cout<<"\nObrigado por utilizar o software Kazenski@ SA .\n";
				exit(0);
				
			}//fim case 4
			
		}//fim switch
	
	}while(opcao != 4);//fim DO principal
	
}//fim main





