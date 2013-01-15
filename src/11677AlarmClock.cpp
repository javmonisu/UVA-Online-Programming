//============================================================================
// Name        : 11677AlarmClock.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int h1,m1,h2,m2;
	while(cin>>h1>>m1>>h2>>m2){
		if(h1==0&&h2==0&&m1==0&&m2==0){
			return 0;
		}
			if(h1==h2){
				if(m2>m1){
					cout<<m2-m1<<endl;
				}else if(m2==m1){
					cout<<0<<endl;
				}else{
					cout<<1440-(-1*(m2-m1))<<endl;
				}
			}else if(h2>h1){
					if(m2>m1){
						cout<<(h2-h1)*60+(m2-m1)<<endl;
					}else if(m2==m1){
						cout<<(h2-h1)*60<<endl;
					}else{
						cout<<(h2-h1)*60-(-1*((60-m1)-(60-m2)))<<endl;
					}
			}else{
					int h = 24-h1+h2;
					if(m2 > m1){
						cout<<h*60+(m2-m1)<<endl;
					}else if(m2==m1){
						cout<<(24-h1+h2)*60<<endl;
					}else{
						cout<<h*60-((60-m2)-(60-m1))<<endl;

					}
				}
			}
}
