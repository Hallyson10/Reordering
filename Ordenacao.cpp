#include <iostream>
using namespace std;

void Reordena(string *vet, int tam){
	for(int i = 0 ; i < tam ; i++){
			string temp = vet[i];
			if(i-1 >= 0 && i-1 <= tam){
				vet[i] = vet[i-1];
			    vet[i-1] = temp;
			}	
	}
	//imprimindo o array reordenado
	for(int j = 0 ; j < tam ; j++){
		cout << vet[j] << " ";
	}
}

int main(){
	string vet[] = {"Jean" , "Mateus" , "Olavo" , "Nivea","Julia"};
	
	//tamanho do array
	int tam = sizeof(vet)/sizeof(string);
	//testando a função
	Reordena(vet,tam);
    cout << "\n";
	Reordena(vet,tam);
	cout << "\n";
	Reordena(vet,tam);
    cout << "\n";
	Reordena(vet,tam);
	cout << "\n";
	Reordena(vet,tam);
	return 0;
}
