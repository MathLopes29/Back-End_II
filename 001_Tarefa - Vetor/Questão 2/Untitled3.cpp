#include "iostream"

using namespace std;

int const x=4;
string Nome[4];
int Telefone [4];
string Endereco [x];
string Email [x];
int Cpf [x];

 
int main() {
setlocale(LC_ALL, "Portuguese-brazilian");


for(int i=0; i<4; i++){
cout<<"\nNome:\t"<<Nome[i];
cin>>Nome[i];
}
cout << "\nNomes Cadastrados: " << Nome [0] <<"|" << Nome [1]<<"|" << Nome [2]<<"|" << Nome [3] << "\n" << endl;



for(int i=0; i<4; i++){
cout<<"\nTelefone:\t";
cin>>Telefone[i];
}
cout << "\nTelefones Cadastrados: " << Telefone [0] <<"|" << Telefone [1]<<"|" << Telefone [2]<<"|" << Telefone [3] << "\n" << endl;



for(int i=0; i<x; i++){
cout<<"\nCPF Cadastrado: ";
cin>>Cpf[i];
}
cout << "\nCPFs Cadastrados: " << Cpf [0] <<"|" << Cpf [1]<<"|" << Cpf [2]<<"|" << Cpf [3] << "\n" << endl;


for(int i=0; i<x; i++){
cout<<"\nEmai:\t";
cin>>Email[i];
}
cout << "\nEmails Cadastrados: " << Email [0] <<"|" << Email [1]<<"|" << Email [2]<<"|" << Email [3] << "\n" << endl;


for(int i=0; i<x; i++){
cout <<"\nEndereço:\t";
cin>>Endereco[i];
}
cout << "\nEndereços Cadastrados: " << Endereco [0] <<"|" << Endereco [1]<<"|" << Endereco [2]<<"|" << Endereco [3] << "\n" << endl;

return 0;
}

