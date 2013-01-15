//============================================================================
// Name        : 12555BabyMe.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int aux;
	float a,b;
	bool aEspecial;
	cin>>aux;
	for(int i = 0 ; i < aux ; i++){
		char num[5];
		aEspecial=false;
		cin>>num;
		a=num[0],b=num[2];
		//10Xxx
		cout<<"Case "<<i+1<<": ";
		for(unsigned int j = 0 ; j < 3;j++){
			if(isdigit(num[j])&&isdigit(num[j+1])){
				a = 10;
				aEspecial=true;
			}
		}
		//10X
		if(num[2]=='\0'||num[3]=='\0'){
			if(aEspecial){
				cout<<(0.5*(a))<<endl;
			}else{
				cout<<(0.5*(a-'0'))<<endl;
			}

		}else{
			if(aEspecial){
				b=num[3];
				cout<<(0.5*(a))+(0.05*(b-'0'))<<endl;
			}else{
				cout<<(0.5*(a-'0'))+(0.05*(b-'0'))<<endl;
			}
		}
	}
	return 0;
}
