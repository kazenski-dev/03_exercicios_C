#include <iostream>

using namespace std;

int main(){
	
	int Numero[5];
	
	for (int i=0;i<5;i++){
		cout << "\nDigite o valor do numero ["<<i+1<<"] : ";
		cin >> Numero[i];
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			
			if (Numero[i]<Numero[j]){
				int aux = Numero[i];
				Numero[i]=Numero[j];
				Numero[j]=aux;
			}
		}
	}
	for (int i=0; i<5;i++){
		cout<<Numero[i]<<endl;
	}
	system("pause");
}
