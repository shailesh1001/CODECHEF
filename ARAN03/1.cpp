//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define print(n) printf("%d\n", n)
#define scan(n) scanf("%d", &n)
#define MOD 1000000007
#define ll long long int
 
int main()
{
	int i, j, cases, n;
	long long int ans, sum;
	scan(cases);
	wl(cases)
	{
		scan(n);
		sum=0;
		ans=n;
		while(ans)
		{
			sum+=(ans%10);
			ans/=10;
		}
		printf("%lld\n", n%sum);
	}
	return 0;
}