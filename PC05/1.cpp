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
 
int primes[] = {2,3,5,7,11,13,17,19,23,25,29,31,37,41,43,47};
 
int main()
{
	int cases, i, j, l, u, temp, sum, count;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d%d", &l, &u);
		count=0;
		fl(i,l,u+1)
		{
			temp=i;
			sum=0;
			while(temp)
			{
				sum+=temp%10;
				temp/=10;
			}
			fl(j,0,15)
			{
				if(sum==primes[j])
				{
					count++;
					break;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
 