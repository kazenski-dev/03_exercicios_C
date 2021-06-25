//Lista estatica homogenea e heterogenea


main(){
	//Lista estatica homogenea
	int Lista1[11];
	for(int i=0;i<=10;i++){
		printf("Lista1[%d]",i);
		scanf("%d", &Lista1[i]);
	}
	
	//Lista estatica heterogenea
	struct dados{
		char Nome[10];
		int idade;
		char sexo;
	}Lista[11];
	
	for(int i=0;i<=10;i++){
		printf("Lista[%d].Nome",i);
		scanf("%s", &Lista.Nome[i]);
		printf("Lista[%d].idade",i);
		scanf("%d", &Lista.[i]);
		printf("Lista[%d].sexo",i);
		scanf("%s", &Lista.sexo[i]);
	}
}

