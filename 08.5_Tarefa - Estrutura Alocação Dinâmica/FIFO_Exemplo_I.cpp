
#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q ;
	int cpf;
	
	cout<<"\n\tESTRUTURA DINAMICA FIFO"<<endl;
	
	int *a;
	a = (int*) malloc(sizeof(int)+1);
	
		  
	for(int a=0; a<4; a++){
		cout<<"\n\tDIGITE SEU CPF: ";
		cin>>cpf;
		
		q.push(cpf);
		cout<<endl;
	}
	
	cout<<"\n\tTAMANHO: "<<q.size();
	cout<<"\n\tTOPO: "<<q.front();
	cout<<"\n\tULTIMO VALOR: "<<q.back()<<endl;
	
	
	for(int b=0; b<2; b++){
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
	
	return 0;
}

	
