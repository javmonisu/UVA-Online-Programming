//============================================================================
// Name        : 573Snail.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float h,u,d,f,alturaRecorrida;
	bool fail;
	int contador;
	while(cin>>h>>u>>d>>f){
		fail=false;
		f=(f*0.01*u);
		alturaRecorrida=0.00;
		contador=0;
		if(h==0){
			break;
		}
		while(alturaRecorrida<=h){
			contador++;
			if(u>0){
				alturaRecorrida+=u;
			}
			if(alturaRecorrida>h){
							cout<<"success on day "<<contador<<endl;
							fail=true;
							break;
						}
			alturaRecorrida-=d;
			u-=f;
			if(alturaRecorrida<0){
				cout<<"failure on day "<<contador<<endl;
				fail=true;
				break;
			}
		}
		if(!fail){
			cout<<"success on day "<<contador<<endl;
		}
	}
	return 0;
}
