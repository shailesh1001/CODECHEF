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
	 int cases,x1,x2,x3,x4,y1,y2,y3,y4;
     scanf("%d",&cases);
     while(cases--)
     {
         scanf("%d %d %d %d",&y1,&y2,&y3,&y4);
         x4=(y1+y3)-y2;
         x3=(y3-y4)-x4;
         x2=y1-(x3+x4);
         x1=(x3+x4)-y2;
         printf("%d %d %d %d\n",x1,x2,x3,x4);
     }
	return 0;
}
 