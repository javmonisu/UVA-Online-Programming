//============================================================================
// Name        : HorrorDash.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int m,n,x,y=0;
	while(cin>>m){
		for(int j = 1 ; j < m ; j++){
			cin>>n;
			for(int i = 0 ; i < n ; i++){
						cin>>x;
						if(x>y){
							y=x;
						}
					}
					cout<<"Case "<<j<<": "<<y<<endl;
		}


	}
	return 0;
}
