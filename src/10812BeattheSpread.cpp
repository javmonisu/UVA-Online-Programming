//============================================================================
// Name        : 10812BeattheSpread.cpp
// Author      : Javier Montero
//============================================================================

#include <stdio.h>
using namespace std;

int main() {
	long int i,s,d;
	scanf("%ld",&i);
	for(int j = 0 ; j < i ; j++){
		scanf("%ld %ld",&s,&d);
		if(d>s || (s%2==0 && d%2==1) || (s%2 == 1 && d%2==0)){
			printf("impossible\n");
		}
		else if(d==s){
			printf("%ld 0\n",s);
		}
		else{
			int diferencia = s-d;
			if(diferencia %2 == 1){
				printf("impossible\n");
				continue;
			}
			int a ,b;
			a = diferencia/2+d;
			b = s-a;
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}
