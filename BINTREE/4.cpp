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
 
ll arr1[100], arr2[100];
 
int main()
{
	ll i, j; int cases, flag, k, l;
	ll n, ans;
	scanll(n);
	wl(n)
	{
		scanll(i);
		scanll(j);
		ans=0;
		while(1)
		{
			if(i>j)
			{
				i/=2;
				ans++;
			}
			else if(j>i)
			{
				j/=2;
				ans++;
			}
			else
				break;
		}
 
		printll(ans);
	}
	return 0;
} 