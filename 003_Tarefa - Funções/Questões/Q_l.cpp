#include "math.h"
#include "iostream"

using namespace std;

double A,B,C;
double X,Y,Z;

// Soma dos quadrados dos tr�s valores lidos - ((A*A) + (B*B) + (C*C))
double ExibirResultadoUM(){
	double R;
	
	cout << "\nDigite Valor de A: ";
	cin >> A;
	cout << "Valor Digitado: " << A << endl;
	
	
	cout << "\nDigite Valor de B: ";
	cin >> B;
	cout << "Valor Digitado: " << B << endl;
	
	
	cout << "\nDigite Valor de C: ";
	cin >> C;
	cout << "Valor Digitado: " << C << endl;
		
	R = ((A*A) + (B*B) + (C*C));
	cout << "\nResposta: " << R << endl;
	
	return R;
}

// Quadrado da soma dos tr�s valores lidos. - (X + Y + Z)�
double ExibirResultadoDOIS(){
	double Rr;
	
	cout << "\nDigite Valor de X: ";
	cin >> X;
	cout << "Valor Digitado: " << X << endl;
	
	
	cout << "\nDigite Valor de Y: ";
	cin >> Y;
	cout << "Valor Digitado: " << Y << endl;
	
	
	cout << "\nDigite Valor de Z: ";
	cin >> Z;
	cout << "Valor Digitado: " << Z << endl;
		
	Rr = (X+Y+Z)*(X+Y+Z);
	cout << "\nResposta: " << Rr;
	
	return Rr;
}

int main(){
	 ExibirResultadoUM();
	 ExibirResultadoDOIS();
	return 0;
}
