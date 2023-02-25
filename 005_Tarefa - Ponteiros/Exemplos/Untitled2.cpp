#include "iostream"
#include "cstdlib"
using namespace std;

int main (){
	double x, y, w;
	double *p; // Declaração do Ponteiro //
	
	p=&x; // Ponteiro recebe o endereço do vetor criado //
	cout<<"Digite um numero: ";
	cin>>x;
	cout<<p<<endl; //Valor Inserido Endereço //
	cout<<"\n";

	cout<<"Digite um outro numero: ";
	cin>>y;
	p=&y; // Ponteiro recebe o endereço do vetor criado //
	cout<<p<<endl; //Valor Inserido  Endereço //
	cout<<"\n";

	cout<<"Digite mais um outro numero: ";
	cin>>w;
	p=&w; // Ponteiro recebe o endereço do vetor criado //
	cout<<p<<endl; //Valor Inserido Endereço //
	cout<<"\n";

	double Delta = (y*y) - (4*(x*w));
	cout<<"Valor do Delta: "<<Delta <<endl;
	cout<<"\n";

	double Resposta1 = (-y+(Delta*Delta/Delta)/2*x);
	double Resposta2 = (-y-(Delta*Delta/Delta)/2*x);

	cout<<"Resposta: "<< Resposta1 << endl;
	cout<<"Resposta: "<< Resposta2;
	return 0;}

