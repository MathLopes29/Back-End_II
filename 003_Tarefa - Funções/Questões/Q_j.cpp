#include "math.h"
#include "iostream"


using namespace std;

double Saldo;
double NovoSaldo;

double const RealDolar = 5.16;
double const DolarReal = 5.15;

double ExibirSaldoReal(){
	double saldo = Saldo;
		cout << "\nDigite seu Saldo Bancario: ";
		cin >> Saldo;
	return Saldo;
}

double ExibirSaldoDolar(){
	double saldo = Saldo;
		cout << "\nDigite seu Saldo Bancario: ";
		cin >> Saldo;
	return Saldo;
}

double Conversao(){
	
	MENU:
	system("cls");
		
	cout << "\nCotacao do Real nos Estados Unidos [Dolar -> Real]: " << DolarReal;
	cout << "\nCotacao do Dolar no Brasil [Real -> Dolar]: " << RealDolar << endl;
	
		int tecla;
		cout << "\nValor Equivalente de Real para Dolar [1] Valor Equivalente de Dolar para Real [2]: ";
		cin >> tecla;
		cout << "Sua escolha foi: " << tecla << endl;
		
		switch (tecla){
			case 1: 
				tecla = '1';
				cout <<"Saldo digitado:R$ "<< Saldo << endl;
				NovoSaldo = Saldo * RealDolar;
				cout << "\nSaldo Equivalente em Dolar: "<< NovoSaldo << endl;
				exit(0);
				break;
				
			case 2:
				tecla = '2';
				cout <<"Saldo digitado:$ "<< Saldo << endl;
				NovoSaldo = Saldo * DolarReal;
				cout << "\nSaldo Equivalente em Reais: "<< NovoSaldo << endl;
				exit(0);
				break;
			
		}
	goto MENU;
}

// Saldo Disponível para Dolar //
double EscolhaMoeda(){
	
	int tecla;
	cout << "Digite qual moeda voce quer digitar no seu Saldo Bancario: ";
	cout << "\n Real [1] Dolar [2] Saida [3]: ";
	cin >> tecla;
	cout << "Sua escolha foi: " << tecla << endl;
	
	switch (tecla){
		case 1:
			tecla ='1';
				ExibirSaldoReal();
				Conversao();
				exit(0);
				break;
				
		
		case 2:	
			tecla = '2';
				ExibirSaldoDolar();
				Conversao();
				exit(0);
				break;
		
		case 3:
			tecla = '3';
			exit(0);
			break;			
	}
}


int main(){
	
	EscolhaMoeda();
	return 0;
}
