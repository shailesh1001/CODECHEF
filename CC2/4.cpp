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
 
long long int fbn[1000005];
 
void calc_fbn()
{
	int i;
	fbn[0]=0;
	fbn[1]=1;
	long long int temp;
	fl(i,2,1000005)
	{
		temp=fbn[i-1]+fbn[i-2];
		if(temp>1000000007)
			temp%=1000000007;
		fbn[i]=temp;
	}
}
 
int main()
{
	calc_fbn();
	long long int cases, a, b, r, ans;
	scanf("%lld", &cases);
	wl(cases--)
	{
		scanf("%lld%lld%lld", &a, &b, &r);
		if(r==1)
			printf("%d\n", a);
		else if(r==2)
			printf("%d\n", b);
		else
		{
			//cout<<fbn[r-2]<<" "<<fbn[r-1];
			ans=(b*fbn[r-1])+(a*fbn[r-2]);
			printf("%lld\n", ans%1000000007);
		}
		//cout<<">"<<ans<<"<";
		//printf("%lld\n", ans%1000000007);
	}
	return 0;
} 