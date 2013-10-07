//============================================================================
// Name        : 11150Cola.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int bottles;
int main() {
	while(cin>>bottles){
		int aux=bottles;
		while(bottles>=3){
			aux=aux+(bottles/3);
			bottles = (bottles/3)+(bottles%3);
		}
		if(bottles==2){
			aux++;
		}
		cout<<aux<<endl;
	}
	return 0;
}
