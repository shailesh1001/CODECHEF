//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<stdio.h>
 
int main()
{
	int cases, x, y, tx, ty;
	scanf("%d", &cases);
	while(cases--)
	{
		scanf("%d%d", &x, &y);
		if(x==0 || y==0)
		{
			printf("0\n");
			continue;
		}
		if(x%2==0)
			tx=x/2;
		else
			tx=(x/2)+1;
		if(y%2==0)
			ty=y/2;
		else
			ty=(y/2)+1;
		printf("%d\n", x+y-tx-ty+1);
	}
	return 0;
} 
