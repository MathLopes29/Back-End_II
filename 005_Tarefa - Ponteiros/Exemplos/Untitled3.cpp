/**
*[Área] Circulo = pi*R^2
*[Diâmetro] Circulo = 2*R
*/


#include "math.h"
#include "iostream"

using namespace std;

float Diametro;
double const pi = 3.14;

double VArea(){
	double Area;
	float Raio = Diametro/2;
	Area = pi * (Raio*Raio);
	return Area;
}

float VRaio(){
	float Raio = Diametro/2;
	return Raio; 
}

float VPerimetro(){
	float Raio = Diametro/2;
	float Perimetro = (2*pi)*Raio;
	return Perimetro;
}

int main(){
	
	float *pDiametro; // Declaração do Ponteiro //
	pDiametro=&Diametro; // Ponteiro recebe o endereço do vetor criado //
	
	
	MENU:
	system ("cls");

	int tecla;
	cout << "Perimetro [1] Area [2] Raio [3] Saida [4]:";
 	cin >> tecla;
 	cout << "Sua escolha foi: " << tecla << endl;
	
	switch(tecla){
		case 1:
			tecla = '1';
			cout<<"\nDigite o Diametro do Circulo: ";
			cin>>Diametro;
			cout<<"Ender da Variavel Diametro: "<<pDiametro << endl;
			cout<<"Valor da Variavel Diametro: "<<*pDiametro << endl;
			cout<<"Perimetro do Circulo: "<<VPerimetro()<<endl;
			exit(0);
			break;
			
		case 2:
			tecla = '2';
			cout<<"\nDigite o Diametro do Circulo: ";
			cin>>Diametro;
			cout<<"Ender da Variavel Diametro: "<<pDiametro << endl;
			cout<<"Valor da Variavel Diametro: "<<*pDiametro << endl;
			cout<<"Area do Circulo: "<<VArea()<<endl;
			exit(0);
			break;
			
		case 3:
			tecla = '3';
			cout<<"\nDigite o Diametro do Circulo: ";
			cin>>Diametro;
			cout<<"Ender da Variavel Diametro: "<<pDiametro << endl;
			cout<<"Valor da Variavel Diametro: "<<*pDiametro << endl;
			cout<<"Raio do Circulo: "<<VRaio()<<endl;
			exit(0);
			break;
		case 4:
			tecla = '4';
			cout << "Saindo ... " << endl;
			system("exit");
			exit(0);
			break;
	}
	goto MENU; 
	
	return 0;
}

