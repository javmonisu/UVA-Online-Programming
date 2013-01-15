//============================================================================
// Name        : 11450Wedding.cpp
// Author      : Javier Montero
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#define inf 10000
#define max(a,b) (a>b)?a:b
int n;
int dp[205][25];
int items[25][25];
int optimal(int i,int money)
{
	if(money<0)
		return -inf;
	else if(i==n&&money>=0)
		return 0;
	else if(dp[money][i]!=-1)
		return dp[money][i];
	else
	{
		int m = -inf;
		int j;
		for(j=1;j<=items[i][0];j++)
			m = max(items[i][j]+optimal(i+1,money-items[i][j]),m);
		return dp[money][i]=m;;
	}
}
int main()
{
	int M,tc,i,j;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&M,&n);
		for(i=0;i<=M;i++)
			for(j=0;j<=n;j++)
				dp[i][j]=-1;
		for(i=0;i<n;i++)
		{
			scanf("%d",items[i]);
			for(j=1;j<=items[i][0];j++)
				scanf("%d",items[i]+j);
		}
		if(optimal(0,M)>0)
			printf("%d\n",optimal(0,M));
		else
			puts("no solution");
	}
	return 0;
}
