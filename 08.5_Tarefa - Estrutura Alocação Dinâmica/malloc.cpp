#include "cstdlib"
#include "iostream"
#include "math.h"
#include "stdio.h" // Para fun��o Gets(); //
#include "stdlib.h" // Para aloca��o din�mica //

using namespace std;

int main (){

// char vnome[50];//
char *vnome;

// malloc() return void por isso o (char*) //
// sizeof() Para o tamanho da vari�vel na mem�ria alocada //
vnome = (char*) malloc(sizeof(char)+1);

// cin >> vnome; // 
gets(vnome);

cout << vnome;

return 0;	
}

/* N�o temos mais a reserva das posi��es ou seja, temos o espa�o alocado de acordo com o que � digitado */
