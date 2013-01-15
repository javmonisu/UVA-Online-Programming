//============================================================================
// Name        : 494Kinder.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char frase[5000];
	while(gets(frase)){
		int contador=0;
		bool alph=false;
		for(unsigned int i = 0 ; i < strlen(frase); i++){
			if(isalpha(frase[i])&&!alph){
				contador++;
				alph=true;
			}else if(!isalpha(frase[i])){
				alph=false;
			}
		}
		cout<<contador<<endl;
	}
}
