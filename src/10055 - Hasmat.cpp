//============================================================================
// Name        : Hasmat.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	long a,b;
	while(cin>>a>>b){

			if(a>b){
				cout<<(a-b)<<endl;
			}else{
				cout<<(b-a)<<endl;
			}

	}
	return 0;
}
