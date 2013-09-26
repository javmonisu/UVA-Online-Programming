//============================================================================
// Name        : 11777AutomateTheGrades.cpp
// Author      : Javier Montero
//============================================================================

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int x;
	int a,b,c,d,e,f,g;
	scanf("%d",&x);
	for(int i = 1 ; i<= x ; i++){
		scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
		vector<int> classTest;
		classTest.push_back(e);
		classTest.push_back(f);
		classTest.push_back(g);
		sort(classTest.begin(),classTest.end());
		int result = a+b+c+d+(classTest.at(2)+classTest.at(1))/2;
		printf("Case %d: ",i);
		if(result>=90){
			printf("A\n");
			continue;
		}
		else if(result>=80){
			printf("B\n");
			continue;
		}
		else if(result>=70){
			printf("C\n");
			continue;
		}
		else if(result>=60){
			printf("D\n");
			continue;
		}
		else{
			printf("F\n");
		}
	}
	return 0;
}
