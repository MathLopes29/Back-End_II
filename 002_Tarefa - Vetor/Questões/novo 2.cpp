#include "iostream"
#include "math.h"

using namespace std;

int const x=5;
int idade [x];
string nome[x];

void cadastro (){
	for(int i=0; i<x; i++){
		cout<<"\nDigite seu Nome:\t"; 
		cin>>nome[i];
		cout<<"\nIdade\t";
		cin>>idade[i];	
	}

cout<<"\n*****************************\t"<<endl;
	for(int i=0; i<x; i++){
		cout << "\nNomes: " <<  nome[i] << endl;
		cout << "\nIdades: " <<  idade[i] << endl;
		cout<<"\n*****************************\t"<<endl;
	}
}

void verifMm (){
	int maior;
	int menor;
	int tot = sizeof(idade)/sizeof(int);
	
	for(int i=0; i<tot; i++){
		if(idade[i]> maior || i==0)
		maior = idade[i];
		if(idade[i]< menor || i==0)
		menor = idade[i];
	}
	
	cout<<"\nMaior:\t" << maior;
	cout<<"\nMenor:\t" << menor;
	
	
}


float valorMedia (){
	float media = 0;
	int tot = sizeof(idade)/sizeof(int);
	
	for(int i=0; i<tot; i++){
		media= media+idade[i];	
	}
	
	media= media/tot;
	return (media);
}



int main(int argc, char** argv) {
	
	cadastro();
	verifMm();
	
	 float media = valorMedia();
	 cout <<"\nMedia de Idade\t"<< media << endl;
	
	system("pause"); 
}
