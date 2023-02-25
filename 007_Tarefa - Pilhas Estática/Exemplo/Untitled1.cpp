#include "iostream"
#include "math.h"
#include "cstdlib"
#define max 4

using namespace std;
typedef struct lifo pilha;

struct lifo { 
	int topo;
	int Idado[max];
	float Fdado[max];
	string Sdado[max];  
};

int lerValorI(){ 
	int valor;
	cout << "\nDigite a Idade a ser empilhado: ";
	cin >> valor; 
	return valor; 
}

float lerValorF(){ 
	float valor;
	cout << "\nDigite o Salario a ser empilhado: ";
	cin >> valor; 
	return valor; 
}

string lerValorS(){
    string nome;
	cout << "\nDigite o seu Nome para ser Empilhado: ";
	cin >> nome;
	return nome;
}
 
bool pilhaCheia(pilha p){ 
	if (p.topo == max - 1)
	return true;
	return false; 
}

bool pilhaVazia(pilha p){ 
	if (p.topo==-1)
	return true; 
	return false;
}

pilha pushI (int valor, pilha p) {
	if ( pilhaCheia ( p ) == true) {
	 cout << "\nPilha Cheia!"<<endl;
	 system("pause");
	 return p; 
	}

	 p.topo ++;
	 p.Idado[p.topo] = valor;
	
	 cout << "\bA Idade empilhado foi: " << valor << endl;
	 system("pause");
	 return p; 
}

pilha pushF (int valor, pilha p) {
	if ( pilhaCheia ( p ) == true) {
	 cout << "\nPilha Cheia!"<<endl;
	 system("pause");
	 return p; 
	}

	 p.topo ++;
	 p.Fdado[p.topo] = valor;
	
	 cout << "\bO Salario empilhado foi: " << valor << endl;
	 system("pause");
	 return p; 
}


pilha pushS(string nome, pilha p){
	if ( pilhaCheia ( p ) == true) {
	 cout << "\nPilha Cheia!"<<endl;
	 system("pause");
	 return p; 
	}

	 p.topo ++;
	 p.Sdado[p.topo] = nome;
	
	 cout << "\bO Nome empilhado foi: " << nome <<endl;  
	 system("pause");
	 return p; 
}

pilha popI (pilha p) {
	if (pilhaVazia(p) == true){ 
		cout << "\nA pilha já está vazia!";
 		system("pause"); 
	 	return p; 
	}

	cout << "\bO Idade Desempilhado sera: " << p.Idado[p.topo] << endl;
	system("pause");
	p.Idado[p.topo] = '\0';
	p.topo --; 
	return p; 
}

pilha popF (pilha p) {
	if (pilhaVazia(p) == true){ 
		cout << "\nA pilha já está vazia!";
 		system("pause"); 
	 	return p; 
	}

	cout << "\bO Idade Desempilhado sera: " << p.Fdado[p.topo] << endl;
	system("pause");
	p.Fdado[p.topo] = '\0';
	p.topo --; 
	return p; 
}

pilha popS(pilha p) {
	if (pilhaVazia(p) == true){ 
		cout << "\nA pilha já está vazia!";
 		system("pause"); 
	 	return p; 
	}

	cout << "\bO Nome Desempilhado sera: " << p.Sdado[p.topo] << endl;
	system("pause");
	p.Sdado[p.topo] = '\0';
	p.topo --; 
	return p; 
}


void mostrarPilhaI (pilha p) {
	if (pilhaVazia(p) == true){
		 cout << "\nA pilha está vazia! ";
		 system("pause"); 
		 return; 
	}
	
	for (int i=p.topo; i>=0; i--){
	cout <<"\nIdade Armazenado: "<<p.Idado[i]<<" anos"<<endl;
	}
	cout<<"\n";
	system("pause");
}

void mostrarPilhaF (pilha p) {
	if (pilhaVazia(p) == true){
		 cout << "\nA pilha está vazia! ";
		 system("pause"); 
		 return; 
	}
	
	for (int i=p.topo; i>=0; i--){
	cout <<"\nSalario Armazenado: "<<p.Fdado[i]<<endl;
	}
	cout<<"\n";
	system("pause");
}

void mostrarPilhaS (pilha p) {
	if (pilhaVazia(p) == true){
		 cout << "\nA pilha está vazia! ";
		 system("pause"); 
		 return; 
	}
	
	for (int i=p.topo; i>=0; i--){
	cout <<"\nNome Armazenado: "<<p.Sdado[i]<<endl;
	}
	cout<<"\n";
	system("pause");
}

int tela() {
	int tecla;
	system("cls");
	cout << "\nMenu Idade\n1 Push\n2 Pop\n3 Mostrar pilha\n4 Sair\nItem:";
	cin >> tecla;
	return tecla; 
}

int tela2() {
	int tecla;
	system("cls");
	cout << "\nMenu Salario\n1 Push\n2 Pop\n3 Mostrar pilha\n4 Sair\nItem:";
	cin >> tecla;
	return tecla; 
}

int tela3(){
	int tecla;
	system("cls");
	cout << "\nMenu Nome\n1 Push\n2 Pop\n3 Mostrar pilha\n4 Sair\nItem:";
	cin >> tecla;
	return tecla; 
}

void controlarPilha1 (pilha p){
	int tecla, valor;
	pilha p1;
	p1.topo = -1;
			
	do { 
	tecla = tela();
			switch(tecla) {
	 			case 1: 
				 	valor = lerValorI();
		 			p1 = pushI(valor, p1);
		 			break;
				case 2: 
					p1 = popI(p1); 
					break;
 				case 3: 
				 	mostrarPilhaI ( p1 );
					break;	
			}
		} 
	while (tecla != 4);
	cout << "\nPrograma Pilha Idade Finalizado...!"<<endl;
	system("pause");
}

void controlarPilha2 (pilha p){
	int tecla, valor;
	pilha p1;
	p1.topo = -1;
			
	do { 
	tecla = tela2();
			switch(tecla) {
	 			case 1: 
				 	valor = lerValorF();
		 			p1 = pushF(valor, p1);
		 			break;
				case 2: 
					p1 = popF(p1); 
					break;
 				case 3: 
				 	mostrarPilhaF ( p1 );
					break;	
			}
		} 
	while (tecla != 4);
	cout << "\nPrograma Pilha Salario Finalizado...!"<<endl;
	system("pause");
}

void controlarPilha3 (pilha p){
	int tecla;
	string nome;
	pilha p1;
	p1.topo = -1;
			
	do { 
	tecla = tela3();
			switch(tecla) {
	 			case 1: 
				 	nome = lerValorS();
		 			p1 = pushS(nome,p1);
		 			break;
				case 2: 
					p1 = popS(p1);
					break;
 				case 3: 
				 	mostrarPilhaS( p1 );
					break;	
			}
		} 
	while (tecla != 4);
	cout << "\nPrograma Pilha Nome Finalizado! ...."<<endl;
}

int main() {
	pilha p1;
	controlarPilha1 ( p1 );
	controlarPilha2 ( p1 );
	controlarPilha3 ( p1 );
	
	cout<<"\nPrograma Finalizado"<<endl;
	system("pause");
	return 0; 
}
