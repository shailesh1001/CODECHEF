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
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if((b-a)<(c-b))
		printf("%d", c-b-1);
	else
		printf("%d", b-a-1);
	return 0;
} 