#include "math.h"
#include "iostream"
using namespace std;

int const x = 5;
int Dia[x];
double Valor_Original[x];
float Juros;

int Qtdias(){
	for(int i=0; i<x; i++){
		cout<<"\nQuantidade de dias de atraso:\t";
		cin>>Dia[i];
		// if(Dia[i] > 30){ cout<<"1 Mes"} else if (Dia[i]>60){ cout<<"2 Meses"}
	}
	cout<<"\n*****************************\t"<<endl;
	for(int i=0; i>x; i++){
		cout<<"\nDias:"<< Dia[i];
	}
}

double Valor_Orig(){
	for(int i=0; i<x; i++){
		cout<<"\nValor Original:\t";
		cin>>Valor_Original[i];
	}
	cout<<"\n*****************************\t"<<endl;
	for(int i=0; i<x; i++){
		cout<<"\nValores Originais:\t"<<Valor_Original[i]<<endl;
	}
}
double juros(){
cout<<"\n*****************************\t";
	for(int i=0; i<5; i++){
		Juros = (Dia[i]*0.02*Valor_Original[i])+(Valor_Original[i]);
		cout<<"\nValor Original + Juros:\t"<<Juros<<endl;

	}
}


int main(){
	Qtdias();
 	Valor_Orig();
 	juros();
 	system("pause"); 
}
