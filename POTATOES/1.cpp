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
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
 
ll isprime(ll a)
{
	ll rt,i;
	if(a==2)
		return 1;
	if(a%2 == 0)
		return 0;
	rt=sqrt(a);
	for(i=3;i<=rt;i+=2)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}
 
int main()
{
	ll i, j; int cases;
	ll a, b, sum, tempsum;
	scan(cases);
	wl(cases)
	{
		scanll(a);
		scanll(b);
		sum=a+b;
		fl(i,1,1000000)
		{
			tempsum=sum+i;
			if(isprime(tempsum))
			{
				print(i);
				break;
			}
		}
	}
	return 0;
} 