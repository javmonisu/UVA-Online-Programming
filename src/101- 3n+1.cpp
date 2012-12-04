

#include <iostream>
using namespace std;

int resolucionAlg(int n){
	int cont=1;
	while (n != 1) {
											 	 	 cont++;
										              if (n%2 != 1) n/=2;

										              else{
										                 n = 3*n+1;
										              }

										   }
	return cont;


	}
int main() {
	int a=0, b=0,contador, maximo=0,n,auxA=0,auxB=0;
	while(cin >> a >> b ){
	auxA = a;
	auxB = b;
			if(a > b){
				swap(auxA, auxB);
			}
	for (;auxA<=auxB;auxA++){
		contador = resolucionAlg(auxA);
		if(contador>maximo)maximo=contador;
	}

	cout << a <<" "<< b <<" "<< maximo << endl;
	maximo=0;
	}
}
