#include <iostream>

using namespace std;

int main(){
	
	char Letras[5];
	
	for (int i=0;i<5;i++){
		cout << "\nDigite a letra ["<<i+1<<"] : ";
		cin >> Letras[i];
	}
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			
			if (Letras[i]<Letras[j]){
				int aux = Letras[i];
				Letras[i]=Letras[j];
				Letras[j]=aux;
			}
		}
	}
	for (int i=0; i<5;i++){
		cout<<Letras[i]<<endl;
	}
	system("pause");
}
