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
	int cases, n, a,b;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d", &n);
		a=4*n*((4*n)-1)*((4*n)-2);
		b=4*(n)*(n-1)*(n-2);
		printf("%d\n", (a-b)/6);
	}
	return 0;
}
 