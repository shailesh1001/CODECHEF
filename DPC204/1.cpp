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
	unsigned long long int a, b, fbn1, fbn2, count, temp;
	while(1)
	{
		scanf("%llu%llu", &a, &b);
		fbn1=1;
		fbn2=2;
		count=0;
		if(!a && !b)
			break;
		else
		{
			while(1)
			{
				if(fbn1>=b)
					break;
				if(fbn1>=a)
					count++;
				temp=fbn1;
				fbn1=fbn2;
				fbn2=temp+fbn1;
			}
		}
		printf("%llu\n", count);
	}
	return 0;
}
 