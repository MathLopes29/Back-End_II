/* Fazer o programa fonte de um algoritmo para exibir os vetores: string 
nome [] = {“Sara Lemes”,”Ricardo Jafé”} , double salario [] = {12000, 10243.20} 
e int idade[]={30, 45}; O salário deverá ser exibido com 10% de aumento. 
Implemente um menu de execução.  */

#include <iostream>
#include <string>

using namespace std;
int main() {setlocale(LC_ALL,"Portuguese-brasilian");


string nome1 [] = ("Sara Lemes");
string nome2 [] = ("Ricardo Jafe");

double salario [] = {12000.00, 10243.20};
int idade[]={30, 45};

cout<<("\n******************************\t");
cout<<("\nNome\t") <<nome1[0]<<("\n\t");
cout<<("\nIdade\t") <<idade[0]<<("\n\t");
cout<<("\nSalario\t") <<salario[0]<<("\n\t");
cout<<("\n******************************\t");
cout<<("\nNome\t") <<nome2[0]<<("\n\t");
cout<<("\nIdade\t") <<idade[1]<<("\n\t");
cout<<("\nSalario\t") <<salario[1]<<("\n\t");

double Aumento_1 = salario[0]*1.10;
double Aumento_2 = salario[1]*1.10;

cout<<("\n******************************\t");
cout<<("\nAumento salarial\t")<<Aumento_1;
cout<<("\nAumento salarial\t")<<Aumento_2<<("\n");
cout<<("\n******************************\t");



/*
string nome1 [] = ("Sara Lemes");
string nome2 [] = ("Ricardo Jafe");

double salario [] = {12000.00, 10243.20};
int idade[]={30, 45};
char Op;

double Aumento_1 = salario[0]*1.10;
double Aumento_2 = salario[1]*1.10;

cout<<("\nDigite 1 para mostrar as informacoes: \t");
cin>>Op;

switch(Op) {
case '1' : 
	string nome1 [] = ("Sara Lemes");
	cout<<("\nNome\t") <<nome1[0]<<("\n\t");
	cout<<("\nIdade\t") <<idade[0]<<("\n\t");
	cout<<("\nSalario\t") <<salario[0]<<("\n\t");
	cout<<("\nAumento salarial\t")<<Aumento_1;
	cout<<("\n***********************************\t");
	cout<<("\nNome\t") <<nome2[0]<<("\n\t");
	cout<<("\nIdade\t") <<idade[1]<<("\n\t");
	cout<<("\nSalario\t") <<salario[1]<<("\n\t");
	cout<<("\nAumento salarial\t")<<Aumento_2;

	break;
}
*/	

	return 0;
}


