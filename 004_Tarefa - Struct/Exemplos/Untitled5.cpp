#include "iostream"
#include "cstdlib"
using namespace std;

struct verifica{
	double SM,PR;
	
	void inserir(double sSM, double sPR){
		SM=sSM;
		PR=sPR;
	}
	void mostrar(){
		cout<<"Salario: "<<SM<<"\n";
		cout<<"Percentual de Reajuste: "<<PR<<"\n";
	}
	double calcularReajuste(){
		double NS;
		NS = SM+(SM*PR);
		cout<<"Salario Novo....."<<NS<<"\n\n";	return NS;}};
int main(){
	
	verifica *NovoSalario = new verifica [2];
	//verifica Salario;
	
	NovoSalario[0].inserir(5000,0.4);
	NovoSalario[1].inserir(3280,0.25);

	for(int i=0; i<2; i++){
		NovoSalario[i].mostrar();
		NovoSalario[i].calcularReajuste();
	}
	
return 0;
}

