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
	int cases;
	long long int n,t;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		t=n;
		n=(2*n)/3;
		if(t%3!=0)
			n++;
		n=n%1000000007;
		printf("%lld\n", n);
	}
	return 0;
}
 