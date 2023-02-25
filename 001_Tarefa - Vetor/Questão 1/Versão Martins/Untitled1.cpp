#include "iostream"
#include "math.h"
 
using namespace std;
 
int const n=2;
double salario[] = {12000.00, 10243.20};
int idade[] = {30, 45};
string nome[]= {"Sara Lemes", "Ricardo Jafé"};
 
 
int main () {
setlocale(LC_ALL, "Portuguese-brazilian");

cout<<"\nEsses são os dados de salário, idade e nome dos funcionários respectivamente aplicando em seu salário um aumento de 10%:\n";

double x;

for(int i=0; i<n; i++){
	x = salario[i] * 1.1;
	cout<<"\nSalário:" <<"R$ " << x <<"\nIdade:"<< idade[i] <<" Anos"<<"\nFuncionário: "<< nome[i]<< endl;
}

return 0;
}

