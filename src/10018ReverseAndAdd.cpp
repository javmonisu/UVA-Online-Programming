//============================================================================
// Name        : 10018ReverseAndAdd.cpp
// Author      : Javier Montero
//============================================================================

#include <iostream>
using namespace std;

long long int Reverse (long long int no) {
	  	//get num digits
		long long int reverse=0;
		long long int digit = 0;
		while(no !=0)
		{
			digit=no%10; //modulo
			reverse=reverse*10+digit;
			no=no/10;
		}
	  return (reverse);
}
int main() {
	unsigned int numbersEntered;
	unsigned int i;
	cin>>numbersEntered;
	for(i = 0; i<numbersEntered ; i++){
			long long int number;
			unsigned int j;
			cin>>number;
			long long int numbermodified=number;
			for(j = 0 ; j <1000; j++){
								long long int reversedNumber = Reverse(numbermodified);
								if(numbermodified == reversedNumber && j>=1){
											cout<<j<<" "<<numbermodified<<endl;
											break;
								}
								numbermodified+=reversedNumber;
						}
	}
	return 0;
}

