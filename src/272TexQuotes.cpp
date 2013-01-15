//============================================================================
// Name        : 272TexQuotes.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int iaux;
	char texto[500],texto2[500];
	while(cin>>texto){
		for(int i = 0; i< strlen(texto); i++){
			if(texto[i]=='"'{
				texto[i]='`';
				for(iaux=i;iaux<strlen(texto);iaux++){
					texto2[i]=texto[i+1]
				}
				for(int a = i+2 ; a < strlen(texto); a++){
					texto[a]
				}
			}
			cout<<texto[i];
		}
		cout<<endl;

	}
	return 0;
}
