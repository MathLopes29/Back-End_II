#include "iostream"
#include "cstdlib"

using namespace std;

/*
	int num = 5;

	int*pn;
	pn = &num;
	cout << "Valor dentro da Variavel: "<< *pn<< endl; 
	cout << "Ender da Variável: "<<pn << endl; 
	
*********************************************************************************

	string veiculo="Carro";
	string *pv;
	
	pv = &veiculo; //Ponteiro PV recebe o Ender da variável Veiculo //
	
	cout<< *pv << endl; // Valor dentro da Varíavel //
	cout<< pv << "\n" << &veiculo << endl; // Ender da Memória RAM do sistema //
	
	*pv = "Moto"; //Ender apontado PV add o valor "Moto" //
	
	cout<< *pv << endl;
	cout<< pv;
********************************************************************************	
	
	p = &vetor[0];
	cout << "\n";
	cout << *p << endl;
	cout << p << endl;

	p = &vetor[5];
	cout << "\n";
	cout << *p << endl;
	cout << p << endl;
*/

int main(){
	
	int *p;
	int vetor[10];
	
	for (int i = 0; i<10; ++i){
		cout<<"Coloque o valor do vetor: ";
		cin >> vetor[i];
	}
	
	for (int y = 0; y<10; y++){
		p = &vetor[y];
		cout << "\n";
		cout << *p << endl;
		cout << p << endl;
	}
	

	p = &vetor[0]; 
	cout <<"\n";
	cout <<"Ender do Vertor[0]: ";
	cout << p << endl;
	
	*(p+=1); // vetor[1] = Ender //
	cout <<"Ender do Vertor[1]: ";
	cout << p << endl;
	
	p = &vetor[0]; // p=vetor; //
	*p=10; // vetor[0] = 10; //
	cout <<"\n";
	cout << "Novo valor armazenado no Vetor[5]: "<<vetor[5];
	
	
	
	return 0;
}
