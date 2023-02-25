#include <iostream>
using namespace std;

struct pilha{
 int num;
 pilha *prox; // Conexão de uma pilha para outra //
};

int main(){
 pilha *topo = NULL; // Topo como iniciador - Limite da Pilha //
 pilha *aux; // Variável Temporaria //
 
 int tecla;
  do{
    cout <<  "\n\n\tPILHA DE ESTRUTURA DINAMICA"<<endl;
    cout <<  "\n\t1 - PUSH INSERIR NA PILHA"
		     "\n\t2 - CONSULTAR TODA PILHA"
		     "\n\t3 - POP REMOVER DA PILHA"
		     "\n\t4 - DESEMPILHAR A PILIHA"
		     "\n\t5 - ESVAZIAR A PILHA" 
		     "\n\t6 - SAIR"
		     "\n\tESCOLHA: ";
    cin >> tecla;


   if(tecla == 1){
     cout << "\n\tINSIRA O NUMERO NA PILHA: ";
     
	 pilha *novo = new pilha();
     
	 cin >> novo->num; // pilha novo recebe o item da struct: num //
     novo->prox = topo; // a pilha novo recebe o item da struct proximo valor sendo esse valor o topo //
     topo = novo; // topo é igual a nova celula //
     
	 cout << "\n\tNUMERO "<<novo->num<<" INSERIDO COM SUCESSO!!!"<<endl;
	 system("pause");
	 system("cls");
    }

   if(tecla == 2){
     if(topo == NULL)
	 	cout << "\n\tPILHA VAZIA!!!"<<endl;
     
	 else{
       cout << "\n\tPILHA COMPLETA: ";  
	   aux = topo; // variável aux recebe o valor que esta no topo e assim podemos exibir todos os outros valores entrados //
       
       while(aux != NULL){
        cout << aux->num << " "; // variável aux deve receber o num (topo -> num) //
        aux = aux->prox; // num = prox //
       }
       
       system("pause");
	   system("cls"); 
      }
    }


   if(tecla == 3){
     if(topo == NULL)
	 	cout << "\n\tPILHA VAZIA!!!";
	 else{
       aux = topo;
       cout << "\n\tNUMERO: " << topo->num << " REMOVIDO COM SUCESSO!!!"<<endl;
       topo = topo->prox;
       delete(aux);
       
       system("pause");
	   system("cls"); 
      }
    }

   if(tecla == 4){
     if(topo == NULL)
	 	cout << "\n\tPILHA VAZIA!!!";
	 else{
       cout<<"\n\tTOPO: "<<topo->num <<endl;
       aux = topo->prox;

       while(aux != NULL){
        aux = aux->prox;
        topo->prox--;
       }
      }
      system("pause");
	  system("cls"); 
    }
    

   if(tecla == 5){
     if(topo == NULL)
	 	cout << "\n\tPILHA VAZIA!!!"<<endl;
	 else{
       aux = topo;
       while(aux != NULL){
       	
        topo = topo->prox;
        delete(aux);
        aux = topo;
       }
       cout << "\n\tPILHA ESVAZIADA COM SUCESSO!!!!"<<endl;
      }
    }

   if(tecla<1 || tecla>6)
   		cout << "\n\tOPCAO INVALIDA!!!"<<endl;
   else
   if(tecla == 6)
   		cout<<"\n\t FIM! \n\n"<<endl;
   }while(tecla != 6);
 return 0;
}

