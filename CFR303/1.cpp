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
	int n, n1, n2, n3, cases, c1=0, c2=0, c3=0;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		n1=n2=n3=n;
		c1=c2=c3=0;
		while(n1)
		{
			c1+=n1/2;
			n1/=2;
		}
		while(n2)
		{
			c2+=n2/3;
			n2/=3;
		}
		while(n3)
		{
			c3+=n3/5;
			n3/=5;
		}
		printf("%d\n%d\n%d\n", c1,c2,c3);
	}
	return 0;
}