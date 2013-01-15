//============================================================================
// Name        : 10082WERTYU.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	char TA[]="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./",c;

	while(getchar()){
		vector<char> letras;
		for(int i = 0 ; i < 47 ; i++){
			if(TA[i]==c){
				c=TA[i-1];
				letras.push_back(c);
			}
		}
		for(int i = 0 ; i < letras.size(); i++){
			cout<<letras.at(i);
		}
		cout<<endl;

	}
	return 0;
}
