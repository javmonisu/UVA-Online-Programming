//============================================================================
// Name        : ClockHands579.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
	char input[50];
	float grado=0.00;
	while(cin>>input){
		vector<char*> hora;
		char* p;
		p=strtok(input,":");
		while(p!= NULL){
			hora.push_back(p);
			p=strtok(NULL,":");
		}
		float a = atof(hora.at(0)),b=atof(hora.at(1));
		if(a==0&&b==0){
			return 0;
		}
		grado=((a*60)*0.5)+(b*0.5)-(b*6);
		if(grado<0)grado*=-1;
		if(grado>180)grado=360-grado;
		printf("%.3f\n",grado);

	}

}
