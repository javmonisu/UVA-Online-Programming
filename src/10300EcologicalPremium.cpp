//============================================================================
// Name        : 10300EcologicalPremium.cpp
// Author      : Javier Montero
//============================================================================


#include <cstdio>
using namespace std;

int main() {
	int n,f;
	int x1,x2,x3;
	scanf("%d",&n);
	for ( int i = 0 ; i < n ; i++){
		long long value=0;
		scanf("%d",&f);
		for( int j = 0 ; j < f ; j++){
			scanf("%d %d %d",&x1,&x2,&x3);
			value +=(long long)(x1*x3);
		}
		printf("%lld\n",value);
	}
	return 0;
}
