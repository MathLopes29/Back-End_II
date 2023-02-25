#include "cstdlib"
#include "iostream"
#include "math.h"
#include "stdio.h" // Para função Gets(); //
#include "stdlib.h" // Para alocação dinâmica //

using namespace std;

int main (){

// char vnome[50];//
char *vnome;

// malloc() return void por isso o (char*) //
// sizeof() Para o tamanho da variável na memória alocada //
vnome = (char*) malloc(sizeof(char)+1);

// cin >> vnome; // 
gets(vnome);

cout << vnome;

return 0;	
}

/* Não temos mais a reserva das posições ou seja, temos o espaço alocado de acordo com o que é digitado */
