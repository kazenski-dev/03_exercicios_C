//Lista duplamente encadeada n�o ordenada

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
using namespace std;//usar comandos C++ cin e cout

main(){
	//setlocale(LC_ALL,NULL);//setlocale(LC_ALL, "Portuguese_Brasil");
	printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));	//para usar acentua��o e � no c�digo
//declarar a lista 
struct Lista{    //1 elem num prox  2 elem num prox  3 elem num prox  4 elem num prox
	int num;
	Lista *prox; // proximo //* - ponteiro - comando de alocacao dinamica de memoria 
	//	- fica com o endereco de memoria do espaco criado
	Lista *ant; // ponteiro * ant - anterior
};

//lista vazia, cria um ponteiro *inicio e aponta ele para Null - Fim

Lista *inicio = NULL;//lista vazia
Lista *fim = NULL;
Lista *aux;


int op,achou,numero;
//menu opcoes

do{
	system("cls");
	cout<<"\n Menu de op��es \n";
	cout<<"\n 1 - Inserir inicio da lista: ";
	cout<<"\n 2 - Inserir fim da lista: ";
	cout<<"\n 3 - Consultar a lista do in�cio para fim: ";
	cout<<"\n 4 - Consultar a lista do fim para in�cio: ";
	cout<<"\n 5 - Remover elemento da lista: ";
	cout<<"\n 6 - Esvazir a lista: ";
	cout<<"\n 7 - Sair do Sistema: ";
	cout<<"\n Digite a op��o: ";
	cin>>op;

if ((op < 1) || (op > 7)){
	cout<<"\n op��o inv�lida digite de 1 a 7";
}//controle para uque o usu�rio digite corretamente uma das op��es
	
if (op==1)	{
	
	cout<<"\n Digite o n�mero a ser inserido no inicio da lista: ";
	Lista *novo = new Lista();//Lista *novo - declaro ponteiro novo - 
	//new Lista()  - crio uma espaco de mem�ria tipo lista e aloco este pra novo
	cin>>novo->num;
	if (inicio == NULL ){ //somente qo lista vazia
		inicio=novo;
		fim=novo;
		novo->prox=NULL;
		novo->ant=NULL;
	}
	else{             //lista com elementos, inseri no inicio lista
	    novo->prox=inicio;
	    inicio->ant=novo;
	    novo->ant=NULL;
	    inicio=novo;
	    cout<<"\n Novo Elemento inserido no inicio da lista ";
		}
	    	cout<<"\n digite enter para voltar ao menu ";
    getch();
	    }//final da opcao 1
	    
if (op==2)	{
	
	cout<<"\n Digite o n�mero a ser inserido no final da lista: ";
	Lista *novo = new Lista();//Lista *novo - declaro ponteiro novo - 
	//new Lista()  - crio uma espaco de mem�ria tipo lista e aloco este pra novo
	cin>>novo->num;
	if (inicio == NULL ){ //somente qunado est� lista vazia
		inicio=novo;
		fim=novo;
		novo->prox=NULL;
		novo->ant=NULL;
	}
	else{             //lista com elementos, inseri no final lista
	    fim->prox=novo;
	    novo->ant=fim;
	    novo->prox=NULL;
	    fim=novo;
	    cout<<"\n Novo Elemento inserido no final da lista ";
		}
	   	cout<<"\n digite enter para voltar ao menu ";
    getch(); 
	    }//final da opcao 2
		
if (op==3)	{
	
	if (inicio == NULL ){ //vefiricar se a lista esta vazia
	
		cout<<"\n Lista vazia ";
	}
	else{          
	    cout<<"\n Listando os elementos da Lista do in�cio para o fim";
	    aux=inicio;
	    while (aux != NULL){	//percorrer a lista endere�o por endere�o at� final lista
	    cout<<"\n "<<aux->num;
	    aux=aux->prox; //elemento a elemento
	     
		}
	    	    }
	cout<<"\n digite enter para voltar ao menu ";
    getch();	    	
}//final da opcao 3

if (op==4)	{
	
	if (inicio == NULL ){ //vefiricar se a lista esta vazia
	
		cout<<"\n Lista vazia ";
	}
	else{          
	    cout<<"\n Listando os elementos da Lista do fim para o in�cio";
	    aux=fim;
	    while (aux != NULL){	//percorrer a lista endere�o por endere�o at� in�cio lista
	    cout<<"\n "<<aux->num;
	    aux=aux->ant; //elemento a elemento sempre buscando o anterior
	     
		}
	    	    }
	cout<<"\n digite enter para voltar ao menu ";
    getch();	    	
}//final da opcao 4
	


	
if (op==5)	{
	
	if (inicio == NULL ){ //vefiricar se a lista esta vazia
	
		cout<<"\n Lista vazia ";
	}
	else{          
	    cout<<"\n Removendo elementos da Lista ";
	    cout<<"\n Digite o n�mero a ser removido da lista: ";
	    cin>>numero;
	    
	    aux=inicio;
	    achou=0;
	    
	    while (aux != NULL){	//percorrer a lista endere�o por endere�o at� final lista
	    if( aux->num == numero){
	    	achou++;
	     if(aux == inicio )	{ //remover no inicio da lista
	     	inicio=aux->prox;
	     if(inicio != NULL)	{
	     	  inicio->ant=NULL;
	     }
	     	delete(aux);
	     	aux=inicio;
	     }
	     else{
		    if(aux == fim )	{ //remover no final da lista
	     	fim=fim->ant;
			fim->prox=NULL;
	     	delete(aux);
	     	aux=NULL;}
	     	else{   //remover no meio da lista
	     	    
				 aux->ant->prox=aux->prox;
				 aux->prox->ant = aux->ant;
				 Lista *aux2;
				 aux2=aux->prox;
				 delete(aux);
				 aux=aux2; }   	
	     	 }
	     }
	     else{
	     	aux=aux->prox; }
	     	
	}
	     if(achou ==0 ) {
	     	cout<<"\n N�mero n�o encontrado ";}
		 else if (achou ==1){
		 	cout<<"\n N�mero removido uma Vez ";}
		 	else {
		 		cout<<"\n N�mero removido"<<achou<<"Vezes";}
		 		
		 	}
		 		
	cout<<"\n digite enter para voltar ao menu ";
    getch();	 	
		 }//final da op��o 5
		 
if (op==6)	{
	
	if (inicio == NULL ){ //vefiricar se a lista esta vazia
	
		cout<<"\n Lista vazia ";
	}
	else{          
	    aux=inicio;   
	    while (aux != NULL){	//percorrer a lista endere�o por endere�o at� final lista
	      inicio=inicio->prox;
	      delete(aux);
	      aux=inicio;}
	      
	      cout<<"\n Lista Esvaziada ";
	      cout<<"\n digite enter para voltar ao menu ";
		  getch();
	      
	    
		 }
	} //final da op��o 6
	
}
while(op != 7);
}
	     	
