//Author : pakhandi
//
 
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
	int cases, n;
	scanf("%d", &cases);
	wl(cases--)
	{
		scanf("%d", &n);
		if(n%2==0)
		{
			n=(n/2);
			printf("%d\n", (n*(n+1))-n);
		}
		else
		{
			n=(n-1)/2;
			printf("%d\n", n*(n+1));
		}
	}
	return 0;
} 
