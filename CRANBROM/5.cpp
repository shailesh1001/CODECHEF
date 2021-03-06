
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int main()
{
	long long int n, type[10005], value[10005], dp[10005], i, j;
	char str[10];
	scanf("%lld", &n);
	fl(i,1,n+1)
	{
		scanf("%s%lld", str, &value[i]);
		if(str[0]=='f')
			type[i]=0;
		else
			type[i]=1;
	}
	dp[0]=0;
	fl(i,1,n+1)
	{
		dp[i]=dp[i-1];
		if(type[i]==1)
		{
			for(j=i-1; j>=0; j--)
			{
				if(type[j]==0 && value[i]==value[j])
				{
					dp[i]=max(dp[i], dp[j-1]+value[j]);
					break;
				}
			}
		}
	}
	printf("%lld", dp[n]);
	return 0;
}