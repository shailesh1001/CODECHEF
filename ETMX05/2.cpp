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
	char str[10000];
	scanf("%s", str);
	int len=strlen(str);
	if(len<3)
		printf("0");
	else
	{
		printf("%c%c%c",str[(len/2)-1], str[len/2], str[(len/2)+1]);
	}
	return 0;
}