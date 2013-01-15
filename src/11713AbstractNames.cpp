//============================================================================
// Name        : 11713Abstract.cpp
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
	int tests;
	char a[20],b[20];
	cin>>tests;
	bool found;
	for(int x = 0 ; x < tests ; x++){
		found=false;
		cin>>a>>b;
		if(strlen(a)!=strlen(b)){
			cout<<"No"<<endl;
			found=true;
		}else{
			if(strcmp(a,b)==0){
				cout<<"Yes"<<endl;
				found=true;
			}
			for(unsigned int i = 0 ; i<strlen(a) && found==false;i++){
				if(a[i]!=b[i]){
					if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
						if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
							cout<<"Yes"<<endl;
							found=true;
						}
					}
				}
			}

			if(!found){
				cout<<"No"<<endl;
			}
		}

	}
	return 0;
}
