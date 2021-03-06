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
 
int sumdigits(int a)
{
	int sum=0;
	while(a)
	{
		sum+=a%10;
		a/=10;
	}
	return sum;
}
 
int main()
{
	int i, j, cases, flag;
	int n;
	scan(cases);
	wl(cases)
	{
		scan(n);
		flag=0;
		fl(i,15,n)
		{
			if(n==sumdigits(i)+i)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			print(i);
		else
			printf("NONE\n");
	}
	return 0;