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
 
int hash[]={18,4,10,10,8,10,18,9,21,18};
 
int main()
{
	long long int cases, n, sum, r;
	scanf("%lld", &cases);
	while(cases--)
	{
		scanf("%lld", &n);
		sum=0;
		while(n)
		{
			r=n%10;
			sum+=hash[r];
			n/=10;
		}
		printf("%lld\n", sum);
	}
	return 0;
}