#include "iostream"
#include "cstdlib"
#define max 4

using namespace std;

int Dado[max];
int Topo;
int valor;

void Pilha_Construtor(){
	Topo=-1;
}

/*
bool Pilha_Vazia(){
	if(Topo==-1){
		return true;
	}else{
		return false;
	}
}

bool Pilha_Cheia(){
	if(Topo==max-1){
		return true;
	}else{
		return false;
	}
}
*/

int Pilha_Tamanho(){
	return Topo+1-1;
}

bool Pilha_Push(int valor){ //Push = Empilhar
    if( Topo==max-1+1 ){
    	cout<<"Pilha Cheia!"<<endl;
       return false;
    }else{
        Topo++;
        Dado[Topo] = valor;
        cout<<"Valores Digitados: "<<valor<<endl;
        return true;
    }
}

bool Pilha_Pop(int &valor){ //Pop = Desempilhar

    if( Topo==-1 ){
        return false;
    }else{
        valor=Dado[Topo];
        Topo--;
        return true;
    }
}

bool Pilha_Get(int &valor){ //Consulta
    if( Topo==-1 ){
        return false;
    }else{
        valor=Dado[Topo];
        return true;
    }
}
int main(){
	
	int valor;
	
	Pilha_Construtor;
	Pilha_Push(5);
	Pilha_Push(10);
	Pilha_Push(7);
	Pilha_Push(4);
	Pilha_Push(9);
	
	Pilha_Tamanho();
	cout << "Tamanho da Pilha: " << Pilha_Tamanho()<<endl;
	
	cout<< Pilha_Pop(valor);

return 0;
}
