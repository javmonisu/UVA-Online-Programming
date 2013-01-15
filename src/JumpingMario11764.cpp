//============================================================================
// Name        : JumpingMario11764.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int numeroDeCasos,n,n2;

	cin>>numeroDeCasos;
	for(int i = 1 ; i <= numeroDeCasos ; i++){
		cin>>n;
		int mayor=0,menor=0;
		vector<int> numeros;
		for(int j = 0 ; j < n ; j++){
			cin>>n2;
			numeros.push_back(n2);
		}
		if(n>0){
			for(unsigned int k = 0 ; k < numeros.size()-1;k++){
						if(numeros.at(k)<numeros.at(k+1)) mayor++;
						else if(numeros.at(k)>numeros.at(k+1)) menor++;
					}
		}
		cout<<"Case "<<i<<": "<<mayor<<" "<<menor<<endl;
	}
	return 0;
}
