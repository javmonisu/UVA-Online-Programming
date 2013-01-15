//============================================================================
// Name        : 458Decoder.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

	#include <iostream>
	#include <string>
	#include <string.h>
	#include <stdio.h>
	using namespace std;

	int main() {
		char input[500];
		while(cin>>input){
			for(int i = 0 ; i < strlen(input);i++){
				input[i]=(char)input[i]-7;
			}
			cout<<input<<endl;
		}
		return 0;
	}
