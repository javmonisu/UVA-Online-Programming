//============================================================================
// Name        : 10420ListConquests.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <map>
#include <set>
#include <string.h>
using namespace std;

int main() {
	int z;

	string x;
	cin>>z;
	set<string> paises;
	map<string,int> amantes;
	for(int i = 0 ; i < z ; i++){
		string input;
		cin>>input;
		paises.insert(input);
		getline(cin,x);
		amantes[input]++;
	}
	vector<string> pais(paises.begin(),paises.end());
	sort(pais.begin(), pais.end());
	 for (vector<string>::const_iterator it = pais.begin(); it !=pais.end(); ++it)
	                cout << *it << ' ' << amantes[*it] << endl;
	return 0;
}
