//============================================================================
// Name        : OneTwoThree.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num,eleccion1;
	string palabra;
	cin>>num;
		for(int i = 0 ; i < num ; i++){
			eleccion1=0;
			cin>>palabra;
			if(palabra.size()==5){
				cout<<"3"<<endl;
			}else{
					if(palabra[0]=='o') eleccion1++;
					if(palabra[1]=='n') eleccion1++;
					if(palabra[2]=='e')	eleccion1++;
					if(eleccion1>=2){
							cout<<"1"<<endl;
					}
					else{
						cout<<"2"<<endl;
					}
			}
		}
	return 0;
}
