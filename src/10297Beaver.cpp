//============================================================================
// Name        : 10297Beaver.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int d,v;
	while(cin>>d>>v){
		if(d==0 && v == 0){
			return 0;
		}
		double ans=pow((pow(d,3)-6*v/3.1415926535897932384626433832795),.33333333333);
		printf("%.3lf\n",ans);
	}
}
