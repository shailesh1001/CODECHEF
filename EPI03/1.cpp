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
	int count=0, i;
	char str[105], ch;
	scanf("%s", str);
	cin>>ch;
	int len=strlen(str);
	fl(i,0,len)
	{
		//cout<<ch;
		if(ch==str[i])
			count++;
	}
	printf("%d", count);
	return 0;
}