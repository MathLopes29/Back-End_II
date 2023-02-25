#include "iostream"
#include "cstdlib"
#include "string.h"

using namespace std;
int const n=5; int linha=-1;

struct disciplinas{
	string nome[n];
	double media[n];
};

struct disciplinas tbmedias;

string ler_nome() {
	string nome;
	cout<<"\nNome:"; cin>>nome;
	return nome; 
}

double ler_media(){ 
	double media;
	cout<<"\nMedia:"; cin>>media;
	return media; 
}
	
 
void novoregistro() { 
	linha++;
	cin.ignore();
	string nom_temp = ler_nome();
	tbmedias.nome [linha]= nom_temp;
	tbmedias.media [linha]= ler_media();
}

void exibir(){ 
	system("clear");
 for(int i=0;i<=linha;i++){
 	cout<<endl<<tbmedias.nome[i];
 	cout<<"-"<<tbmedias.media[i] << endl;
 	} 
 	system("sleep 3");
}

int main(){
 int tecla=0;
	while (tecla != 3){ 
		system("clear");
 		cout<< "\n1 Ler\n2 Exibir\n3 Sair\nitem:";
 		cin >> tecla;
 
 switch(tecla){	
	 case 1: novoregistro(); break;
	 case 2: exibir(); break;
	 case 3: exit(0); break;
 	}
} 	
return 0;
}
