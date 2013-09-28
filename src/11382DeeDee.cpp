//============================================================================
// Name        : 11382DeeDee.cpp
// Author      : Javier Montero
//============================================================================
#include <stdio.h>
using namespace std;


int function(int x)
{
    if(x==1)
        return 1;
    return function(x/2)+1;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",function(n));
    }
    return 0;
}
