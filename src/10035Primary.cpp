//============================================================================
// Name        : 10035Primary.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
using namespace std;

int main()
{   long a,b;
    int adding , carry;
    while(1){
        scanf("%ld %ld",&a,&b);
        carry=0;
        adding=0;
        if(a==0 && b==0)
            break;

        while(a!=0 ||b!=0){
           if((a%10+b%10)+adding>9){
                carry++;
                adding=1;
           }
           else{
        	   	adding=0;
           }
           a/=10;
           b/=10;
        }
        if(carry==0){
            printf("No carry operation.\n");
        }
        else if(carry==1){
             printf("%d carry operation.\n",carry);
        }
        else{
            printf("%d carry operations.\n",carry);
        }
    }
       return 0;
}
