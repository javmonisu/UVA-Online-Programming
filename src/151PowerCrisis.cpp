//============================================================================
// Name        : 151PowerCrisis.cpp
// Author      : Javier Montero
// Description : http://uva.onlinejudge.org/external/1/151.pdf
//============================================================================

#include <iostream>
#include <list>
#include <stdio.h>
#include <cstdio>

using namespace std;
int n;

int test(int m){
	int i;
	list <int> cities;
	//insert all the cities..
	for(i = 1 ; i <= n ; i++){
		cities.push_back(i);
	}
	while(cities.size()>1){
		cities.pop_front();
		for(i = 1 ; i < m ; i++){
			cities.push_back(cities.front());
			cities.pop_front();
		}
	}
	return cities.front();
}

int main() {
	while(scanf("%d", &n)){
		if(n==0){
			break;
		}
		int m = 1;
		int region = 0;
		while(true){
			region = test(m);
			if(region == 13){
				break;
			}
			m++;
		}
		cout<<m<<endl;
	}
	return 0;
}
