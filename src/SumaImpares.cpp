//============================================================================
// Name        : SumaImpares.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : 10783
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int numCasos,a,b,total;
	cin>>numCasos;
	for ( int i = 1 ; i <= numCasos ;i++){
		total=0;
		cin>>a>>b;
		if(a%2==0)a++;

		for(; a <= b ;){
						total+=a;
						a=a+2;
					}
		cout<<"Case "<<i<<": "<<total<<endl;

	}
	return 0;
}
