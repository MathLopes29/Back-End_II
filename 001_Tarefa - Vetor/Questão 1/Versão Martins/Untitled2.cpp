#include "iostream"
#include "math.h"
 
using namespace std;
int const n=4;
string nome[n];
int fone [n];
string ender [n];
string email [n];
int cpf [n];
 
int main() {
setlocale(LC_ALL, "Portuguese-brazilian");

cout<<"\nBem-Vindo ao Cadastro de Dados no Site X, cadastre os nomes desejados:\n";

for(int i=0; i<n; i++){
cout<<"\nNome Cadastrado: "<<nome[i]<<"\n"<< endl;
cin>>nome[i];
}

cout << "\nNomes Cadastrados no Site X: " << nome [0] <<"/" << nome [1]<<"/" << nome [2]<<"/" << nome [3] << "\n" << endl;

cout <<"Agora, cadastre os telefones desejados: "<<"\n"<< endl;
for(int i=0; i<n; i++){
cin>>fone[i];

cout<<"\nTelefone Cadastrado: "<<fone[i]<<"\n"<< endl;
}

cout << "\nTelefones Cadastrados no Site X: " << fone [0] <<"/" << fone [1]<<"/" << fone [2]<<"/" << fone [3] << "\n" << endl;

cout << "Logo em seguida, cadastre os endereços desejados: " << "\n" << endl;
for(int i=0; i<n; i++){
cin>>ender[i];
cout <<"\nEndereço Cadastrado: "<< ender[i]<< "\n" << endl;
}
cout << "\nEndereços Cadastrados no Site X: " << ender [0] <<"/" << ender [1]<<"/" << ender [2]<<"/" << ender [3] << "\n" << endl;

cout << "\nContinuando o registro, cadastre os emails desejados: "<< "\n" << endl;
for(int i=0; i<n; i++){
cin>>email[i];
cout<<"\nEmail Cadastrado: "<< email[i] << "\n"<<endl;
}
cout << "\nEmails Cadastrados no Site X: " << email [0] <<"/" << email [1]<<"/" << email [2]<<"/" << email [3] << "\n" << endl;

cout<<"Para finalizar o cadastro, cadastre os CPFs desejados: "<< "\n"<< endl;
for(int i=0; i<n; i++){
cin>>cpf[i];
cout<<"\nCPF Cadastrado: "<< cpf[i] << "\n"<<endl;
}
cout << "\nCPFs Cadastrados no Site X: " << cpf [0] <<"/" << cpf [1]<<"/" << cpf [2]<<"/" << cpf [3] << "\n" << endl;

cout << "\***Esses são os Dados Cadastrados no Site X***/"<< "\n"<<endl;

cout << "\nNomes Cadastrados no Site X: " << nome [0] <<"/" << nome [1]<<"/" << nome [2]<<"/" << nome [3] << "\n" << endl;
cout << "\nTelefones Cadastrados no Site X: " << fone [0] <<"/" << fone [1]<<"/" << fone [2]<<"/" << fone [3] << "\n" << endl;
cout << "\nEndereços Cadastrados no Site X: " << ender [0] <<"/" << ender [1]<<"/" << ender [2]<<"/" << ender [3] << "\n" << endl;
    cout << "\nEmails Cadastrados no Site X: " << email [0] <<"/" << email [1]<<"/" << email [2]<<"/" << email [3] << "\n" << endl;
cout << "\nCPFs Cadastrados no Site X: " << cpf [0] <<"/" << cpf [1]<<"/" << cpf [2]<<"/" << cpf [3] << "\n" << endl;
return 0;
}

