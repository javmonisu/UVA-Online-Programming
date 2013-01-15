//============================================================================
// Name        : 11172RelationalOperator.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,x;
	cin>>x;
	for(int i = 0 ; i < x ; i++){
		cin>>a>>b;
		if(a>b){
			cout<<">"<<endl;
		}else if(a<b){
			cout<<"<"<<endl;
		}else{
			cout<<"="<<endl;
		}
	}
	return 0;
}
