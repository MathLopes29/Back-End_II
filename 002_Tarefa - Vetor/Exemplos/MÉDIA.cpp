#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;
int vet [ ] = {1,3,4,-1,0,4,19};

float valorMedia() {
 float media = 0;
 int tot = sizeof(vet)/sizeof(int);

 for (int i = 0; i< tot; i++){ 
 
 // media = media + vet[i]
 media += vet[i]; 
 }
 //media = media/tot;
 media /= tot;
return ( media ); 
}

int main () {
	float media = valorMedia();
	cout << endl << media << endl;
system("pause"); 
}

