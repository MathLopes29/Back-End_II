#include "iostream"
#include "math.h"
#include "cstdlib"
#define max 4

using namespace std;
typedef struct lifo pilha;

struct lifo{
	int dado[max];
	int topo;
};

int lerValor(){
	int valor;
	cout<<"Digite o dado para ser empilhado: ";
	cin>>valor;
	return valor;
}

bool pilhaCheia(pilha p){
	if(p.topo== max-1)
	return true;
	return false;
}

bool pilhaVazia(pilha p){
	if(p.topo==-1)
	return true;
	return false;
}

pilha push(int valor, pilha p){
	if(pilhaCheia(p)==true){
		cout<<"Pilha ja esta Cheia!"<<endl;
		system("pause");
		return p;
	}
	
	p.topo++;
	p.dado[p.topo]=valor;
	
	cout<<"\nDado Empilhado: "<< valor << endl;
	system("pause");
	return p;
}

pilha pop(pilha p){
	if(pilhaVazia(p)==true){
		cout<<"Pilha ja esta Vazia!"<<endl;
		system("pause");
		return p;
	}
	
	cout<<"Dado Desempilhado: "<< p.dado[p.topo] <<endl;
	system("pause");
	p.dado[p.topo]='\0';
	p.topo--;
	return p;

}

void mostrarPilha(pilha p){
	if(pilhaVazia(p)==true){
		cout<<"Pilha Vazia!"<<endl;
		system("pause");
		return;
	}
	
	for(int i; i>=0; i--){
	cout<<"Valor Armazenado na Pilha: "<<p.dado[i]<<endl;
	}
	
	cout<<"\n";
	system("pause");
}

int tela(){
	int tecla;
	system("cls");
	cout<<"\nMenu Valor\n1 Push\n2 Pop\n3 Mostrar Pilha\n4 Sair\n"<<endl;
	cin>>tecla;
	return tecla;
}

void controlarPilha(pilha p){
	int tecla, valor;
	pilha p1;
	p1.topo=-1;
	
	do{
		tecla=tela();
		switch(tecla){
			case 1:
				valor=lerValor();
				p1=push(valor,p1);
				break;
			case 2:
				p1=pop(p1);
				break;
			case 3:
				mostrarPilha(p1);
				break;
		}
	}
	
	while(tecla!=4);
	cout<<"Finalizando Programa Pilha! ..."<<endl;
	system ("pause");
}

int main(){
	pilha p1;
	controlarPilha(p1);
	return 0;
}
