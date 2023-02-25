#include "iostream"
#include "cstdlib"

using namespace std;

struct teste{
	double a,b,c,d;
	
	void inserir(double sa, double sb, double sc, double sd){
		a=sa;
		b=sb;
		c=sc;
		d=sd;
	}
	
	void mostrar(){
		cout<<"Insira os valores!"<<"\n";
		cout<<"1*Valor......"<<a<<"\n";
		cout<<"2*Valor......"<<b<<"\n";
		cout<<"3*Valor......"<<c<<"\n";
		cout<<"4*Valor......"<<d<<"\n\n";	
	}
	
	double calculo1(){
		double R1;
		R1= a*c;
		cout<<"Resposta do 1*Produto... "<<R1<<"\n";
		return R1;
	}
	double calculo2(){
		double R2;
		double R1;
		R1= a*c;
		R2=b*d;
		cout<<"Resposta do 2*Produto... "<<R2<<"\n";
		return R2;
	}
	
	double Psoma(){
		double R2;
		double R1;
		double PS;
		R1= a*c;
		R2=b*d;
		PS=R1+R2;
		cout<<"Resposta da Soma entre Produtos... "<<PS<<"\n\n";
		return PS;	
	}};
int main(){
	teste *Valores = new teste[2];
	teste Valor;
	Valores[0].inserir(5,5,5,5);
	Valores[1].inserir(10,10,10,10);
	for(int i=0; i<2; i++){
		Valores[i].mostrar();
		Valores[i].calculo1();
		Valores[i].calculo2();
		Valores[i].Psoma();
	}
return 0;
}

