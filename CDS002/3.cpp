//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cmath>
 
#define wl(n) while(n--)
#define scan(n) scanf("%d", &n)
#define nline printf("\n")
 
int main()
{
	int cases;
	int n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		if(n==2)
			printf("15\n");
		else
		{
			cout<<(pow(n,n+1)-(n-1));
			nline;
		}
	}
	return 0;
} 