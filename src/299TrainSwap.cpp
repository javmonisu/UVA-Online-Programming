//============================================================================
// Name        : 299TrainSwap.cpp 0.018
// Author      : Javier Montero
//============================================================================
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int testCases,trains;
	scanf("%d",&testCases);
	for(int i = 0 ; i < testCases; i++){
		scanf("%d",&trains);
		int variables[trains],movements=0;
		for(int j = 0 ; j < trains; j++){
			scanf("%d",&variables[j]);
		}
		for(int l= 0 ; l < trains-1;l++){
			for(int k = 0 ; k < trains -1; k++){
						if(variables[k] > variables[k+1]){
							//BubbleSort
							swap(variables[k],variables[k+1]);
							movements++;
							continue;
						}
					}
		}
		printf("Optimal train swapping takes %d swaps.\n",movements);
	}
	return 0;
}
