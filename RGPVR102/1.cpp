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
	int arrw[101], arrt[101], cases, n, max, i;
	scanf("%d", &cases);
	wl(cases--)
	{
		scanf("%d", &n);
		fl(i,0,n)
			scanf("%d", &arrw[i]);
		fl(i,0,n)
			scanf("%d", &arrt[i]);
		max=0;
		fl(i,0,n)
		{
			if((arrw[i]*3)+arrt[i]>max)
				max=(arrw[i]*3)+arrt[i];
		}
		printf("%d\n", max);
	}
	return 0;
} 