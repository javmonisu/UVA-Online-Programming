//============================================================================
// Name        : 11727CostCutting.cpp
// Author      : Javier Montero
//============================================================================

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i, v[2];
	scanf("%d",&i);
	for(int j = 1 ; j <= i ; j++){
		vector<int> numbers;
		scanf("%d %d %d",&v[0],&v[1],&v[2]);
		numbers.push_back(v[0]);
		numbers.push_back(v[1]);
		numbers.push_back(v[2]);
		std::sort(numbers.begin(),numbers.end());
		printf("Case %d: %d\n",j,numbers.at(1));
	}
	return 0;
}
