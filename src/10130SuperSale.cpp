//============================================================================
// Name        : 10130SuperSale.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct objetos {
	int pPrecio;
	int wPeso;
};
bool comparacion(objetos const& a, objetos const& b) // comparison function
{
    return a.wPeso < b.wPeso;
}
int main() {
	int t,n,g,p,w,total,pesoPKT;
	objetos objeto;
	cin>>t;

	for(int i = 0 ; i < t ; i++){
		total=0;
		vector<int> pesos;
		vector<objetos> compra;
		cin>>n;
		for(int j = 0 ; j < n ; j++){
			cin>>p>>w;
			objeto.pPrecio=p;
			objeto.wPeso=w;
			compra.push_back(objeto);
		}
		cin>>g;
		for(int k = 0 ; k < g;k++){
			cin>>pesoPKT;
			pesos.push_back(pesoPKT);
		}
		std::sort(compra.begin(), compra.end(), &comparacion);
		for(unsigned int i = 0 ; i < pesos.size();i++){

			for(unsigned int j = 0 ; j < compra.size(); j++){
				if(pesos.at(i)<compra.at(j).wPeso){
					total+=compra.at(j).pPrecio;
					cout<<"HOLA";
					compra.at(j).wPeso=-1;
					break;
				}
			}
		}
		cout<<total<<endl;
	}
	return 0;
}
