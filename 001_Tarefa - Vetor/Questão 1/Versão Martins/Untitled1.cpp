#include "iostream"
#include "math.h"
 
using namespace std;
 
int const n=2;
double salario[] = {12000.00, 10243.20};
int idade[] = {30, 45};
string nome[]= {"Sara Lemes", "Ricardo Jaf�"};
 
 
int main () {
setlocale(LC_ALL, "Portuguese-brazilian");

cout<<"\nEsses s�o os dados de sal�rio, idade e nome dos funcion�rios respectivamente aplicando em seu sal�rio um aumento de 10%:\n";

double x;

for(int i=0; i<n; i++){
	x = salario[i] * 1.1;
	cout<<"\nSal�rio:" <<"R$ " << x <<"\nIdade:"<< idade[i] <<" Anos"<<"\nFuncion�rio: "<< nome[i]<< endl;
}

return 0;
}

