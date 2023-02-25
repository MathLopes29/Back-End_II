#include "iostream"
#include "math.h"
#include <stack>
#define max 3

using namespace std;

int main(){
	
stack <string> Cartas;

Cartas.push("Rei de Copas");
Cartas.push("Rei de Espadas");
Cartas.push("Rei de Ouros");

/*
if(Cartas.empty()){
	cout<<"Pilha Vazia!"<< "\n\n";
	}else{
	cout<<"Pilha com Cartas!"<< "\n\n";	
}
*/

if(Cartas.size() == 0){
	cout<<"Pilha Vazia!"<< "\n\n";
	}else{
	cout<<"Pilha com Cartas!"<< "\n\n";	
}

/*
while(!Cartas.empty()){
	Cartas.pop();
}
*/
cout << "Tamanho da Pilha: "<< Cartas.size() << "\n";

Cartas.top();
cout << "Carta que esta no topo: "<< Cartas.top() << "\n";

Cartas.pop();
cout << "Tamanho Atual da Pilha: "<<Cartas.size() << "\n";
	
return 0;
}
