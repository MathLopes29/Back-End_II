/*
	Teste - Struct 
*/

#include "iostream"
#include "cstdlib"

using namespace std;

struct teste{
	string nome;
	string cor;
	double ano;
	double valor;
	
	void inserir(string stnome, string stcor, double stano, double stvalor){
		nome=stnome;
		cor=stcor;
		ano=stano;
		valor=stvalor;
	}
	
	void mostrar(){
		cout<<"Nome...... "<<nome<<"\n";
		cout<<"Cor....... "<<cor<<"\n";
		cout<<"Ano....... "<<ano<<"\n";
		cout<<"Valor..... "<<valor<<"\n\n";	
	}
};
	
int main(){
	
	teste *carros=new teste[4];
	teste car1,car2,car3,car4;
	
	carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4;
	
	carros[0].inserir("Honda","Red",2022,126.50);
	carros[1].inserir("Ferrari","Yellow",1986,385.55);
	carros[2].inserir("Toyota","Silver",2012,75.00);
	carros[3].inserir("GM","Black",2019,79.00);
	
	for(int i=0; i<4; i++){
		carros[i].mostrar();
	}
	
	return 0;

}
