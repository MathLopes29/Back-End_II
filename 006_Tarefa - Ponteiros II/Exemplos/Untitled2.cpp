# include "iostream"
#include "cstdlib"
using namespace std;

// VARI�VEIS GLOBAIS PARA SWITCH //
int tecla;
struct Cadastro{
	string Nome, Sexo;
	double Idade;
	double SM,PR; 

	// ETAPA PARAS AS VARI�VEIS DE TIPOS DIFERENTES  - STRING //
	void InserirDados(string sNome, string sSexo){
		Nome = sNome;
		Sexo = sSexo;
	}
	void MostrarDados(){
		cout<<"Nome: "<<Nome<<endl;
		cout<<"Sexo: "<<Sexo<<endl;
	}
	
	// ETAPA PARA TIPO DIFERENTE DE VARI�VEL - DOUBLE IDADE //	
	void InserirIdade(double sIdade){
		Idade=sIdade;
	}
	void MostrarIdade(){
		cout<<"Idade: "<<Idade<<endl;
	}
		
// ETAPA PARA ULTIMO TIPO DIFERENTE DE VARI�VEL - DOUBLE Sal�rio Medio (SM) &  Percentual Reajuste (PR)//	
	void InserirSal(double sSM, double sPR){
		SM = sSM; 
		PR = sPR; 
	}
	void MostrarSal(){
		cout<<"Salario: "<<SM <<endl;
	}
	double Calcular_nSal(){
		double nSM;
			
		nSM = SM + (SM * PR);
		cout<<"Novo Salario Reajustado: "<<nSM <<endl;	
		return nSM;	
	}};
int main(){
	Cadastro *NovoCad = new Cadastro[2];
	/*Cadastro Cad; - N�O OBRIGAT�RIO */ 
	
	NovoCad[0].InserirDados("Math","M");
	NovoCad[0].InserirIdade(18);
	NovoCad[0].InserirSal(1000,0.10);
	NovoCad[1].InserirDados("Ana","F");
	NovoCad[1].InserirIdade(20);
	NovoCad[1].InserirSal(2000,0.10);
	
	/*
	for(int i=0; i<2; i++){
		NovoCad[i].MostrarDados();
		NovoCad[i].MostrarIdade();
		NovoCad[i].MostrarSal();
		NovoCad[i].Calcular_nSal();
		cout<<"\n";}*/
	MENU:
	cout << "Mostrar Nome e Sexo [1] Idade [2] Salario + Reajuste [3] Mostrar Tudo [4] Saida [5]:";
 	cin >> tecla;
 	cout << "Sua escolha foi: " << tecla << endl;
	
	switch(tecla){
		case 1:
			tecla = '1';
			NovoCad[0].MostrarDados();
			exit(0);
			break;
			
		case 2:
			tecla = '2';
			NovoCad[0].MostrarIdade();
			exit(0);
			break;
			
		case 3:
			tecla = '3';
			NovoCad[0].MostrarSal();
			NovoCad[0].Calcular_nSal();
			exit(0);
			break;
			
		case 4:
			tecla = '4';
			NovoCad[0].MostrarDados();
			NovoCad[0].MostrarIdade();
			NovoCad[0].MostrarSal();
			NovoCad[0].Calcular_nSal();
			exit(0);
			break;
				
		case 5:
			tecla = '5';
			cout << "Saindo ... " << endl;
			system("exit");
			exit(0);
			break;
	}
	goto MENU; 
	 return 0;}

