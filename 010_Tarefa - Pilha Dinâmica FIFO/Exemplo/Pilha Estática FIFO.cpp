#include<bits/stdc++.h>
#include "string"

using namespace std;

void lifoCPF(){
	
	queue<int> q;
	int cpf;
	
	cout<<"\n\tESTRUTURA DINAMICA FIFO";
	
	int *a;
	a = (int*) malloc(sizeof(int)+1);
		  
	for(int i=0; i<5; i++){
		cout<<"\n\tDIGITE SEU CPF: ";
		cin>>cpf;
		q.push(cpf);
	}
	
	cout<<"\n\tTAMANHO: "<<q.size();
	cout<<"\n\tTOPO: "<<q.front();
	cout<<"\n\tULTIMO VALOR: "<<q.back()<<endl;
	
	
	for(int x=0; x<3; x++){
		if(!q.empty()){
			int remove = q.front();
			q.pop();
			cout << "\n\tELEMENTO REMOVIDO: " << remove;
		}
	}
	
	cout<<endl;
	cout<<"\n\tNOVO TAMANHO: "<<q.size();
	cout<<"\n\tNOVO TOPO: "<<q.front();
	cout<<"\n\tULTIMO VALOR: "<<q.back()<<endl;
	cout<<"\n\tFIM DO PROGRAMA CPF ..."<<endl;
	system("pause");
	system("cls");	
}

void lifoNOME(){
	
	queue<string> n;
	string nome;
	
	string *b;
	b = (string*) malloc(sizeof(string)+1);
	
	cout<<"\n\tPROGRAMA LIFO NOME INICIADO!"<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\tDIGITE SEU NOME: ";
		cin>>nome;
		
		n.push(nome);
		cout<<endl;
	}
	
	cout<<"\n\tTAMANHO: "<<n.size();
	cout<<"\n\tTOPO: "<<n.front();
	cout<<"\n\tULTIMO VALOR: "<<n.back()<<endl;
	
	
	for(int b=0; b<2; b++){
		if(!n.empty()){
			string remove = n.front();
			n.pop();
			cout << "\n\tELEMENTO REMOVIDO: " << remove;
		}
	}
	
	cout<<endl;
	cout<<"\n\tNOVO TAMANHO: "<<n.size();
	cout<<"\n\tNOVO TOPO: "<<n.front();
	cout<<"\n\tULTIMO VALOR: "<<n.back()<<endl;
	cout<<"\n\tFIM DO PROGRAMA CPF ..."<<endl;
	system("pause");
	system("cls");
}

int main(){

lifoCPF();
lifoNOME();		
		
	return 0;
}

	

