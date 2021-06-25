/*Exercício de lista encadeada não ordenada - 
Construa um sistema usando lista encadeada onde será inserido nesta informações 
sobre funcionários de uma empresa. As informações serão: Nome Funcionário,
data de contratação,salário base. Inserir apenas do fim da lista
o Sistema deve permitir:
1 - Inserir funcionário;
2 - Remover funcionário;
3 - Listar funcionários;
4 - Sair do Sistema*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
using namespace std;//usar comandos C++ cin e cout

main(){
	
	setlocale(LC_ALL,NULL);//setlocale(LC_ALL, "Portuguese_Brasil");
	//declarar a lista 
	struct ListaFuncEmp{    //1 elem num prox  2 elem num prox  3 elem num prox  4 elem num prox
		char NomeFunc[30];
		char DataContr[11];
		float Salario;
		ListaFuncEmp *prox; // proximo //* - ponteiro - comando de alocacao dinamica de memoria 
	//	- fica com o endereco de memoria do espaco criado
	};

	ListaFuncEmp *inicio = NULL;//controle do inicio da lista e recebendo Null lista vazia
	ListaFuncEmp *fim = NULL;//controle do fim da lista 
	ListaFuncEmp *aux;//aux para operacionalizar posições lista
	ListaFuncEmp *ant;//para operacionalizar elementos no meio da lista 
	
	//menu opcoes
	int op;//variavel da opçao do menu
	
	do{
		menu:
		system("cls");
		cout<<"\n Menu de opcoes \n";
		cout<<"\n 1 - Inserir funcionario: ";
		cout<<"\n 2 - Remover funcionario: ";
		cout<<"\n 3 - Listar funcionarios: ";
		cout<<"\n 4 - Sair do Sistema: ";
		cout<<"\n Digite a opcao: ";
		cin>>op;
		
		switch (op){
			
			case 1: {
				
				cout<<"\n Digite os dados do Funcionário a ser inserido no final da lista: ";
				ListaFuncEmp *novo = new ListaFuncEmp();//Lista *novo - declaro ponteiro novo - 
				//new ListaFuncEmp()  - crio uma espaco de memória tipo lista e aloco este pra novo
				cout<<"\n Digite o Nome do Funcionário: ";
				cin>>novo->NomeFunc;
				cout<<"\n Digite a data de contratação do Funcionário: ";
				cin>>novo->DataContr;
				cout<<"\n Digite o Salário do Funcionário: ";
				cin>>novo->Salario;
		
				if (inicio == NULL ){ //somente qo lista vazia
				
					inicio=novo;
					fim=novo;
					fim->prox=NULL;
					
				}else{ //lista com elementos, inseri no inicio lista
				
				    fim->prox=novo;
				    fim=novo;
				    fim->prox=NULL;
				    cout<<"\n Novo funcionário inserido no final da lista ";
				}
			   	cout<<"\n digite enter para voltar ao menu ";
			   	goto menu;		
				break;
			}
			
			case 2: {
				
				break;
			
			
			case 3:{
				
				break;
			}
	}	
		
		

