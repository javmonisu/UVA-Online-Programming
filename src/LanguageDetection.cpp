//============================================================================
// Name        : LanguageDetection.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=1;
	string input;
	while(cin>>input){
		if(input=="#"){
			break;
		}
		else{
			if(input=="HOLA"){
				cout<<"Case "<<n<<": SPANISH"<<endl;
			}
			else if(input=="HELLO"){
				cout<<"Case "<<n<<": ENGLISH"<<endl;
			}
			else if(input=="HALLO"){
				cout<<"Case "<<n<<": GERMAN"<<endl;
			}
			else if(input=="BONJOUR"){
				cout<<"Case "<<n<<": FRENCH"<<endl;
			}
			else if(input=="CIAO"){
				cout<<"Case "<<n<<": ITALIAN"<<endl;
			}
			else if(input=="ZDRAVSTVUJTE"){
				cout<<"Case "<<n<<": RUSSIAN"<<endl;
			}
			else{
				cout<<"Case "<<n<<": UNKNOWN"<<endl;
			}
		}
		n++;
	}
	return 0;
}
