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
	long long int cases, i, y, ans, len;
    char move[100005];
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%s",move);
        ans=0;
        y=0;
        len=strlen(move);
        fl(i,0,len)
        {
            if(move[i]=='N')
                y++;
            else if(move[i]=='S')
                y--;
            else if(move[i]=='E')
                ans+=y;
            else
                ans-=y;
        }
        if(ans<0)
            printf("%lld\n",(-1)*ans);
        else
            printf("%lld\n",ans);
    }
    return 0;
}
 