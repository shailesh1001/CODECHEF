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
#define MOD 1000000007
#define ll long long int
 
char mat[205][205];
 
int main()
{
	int i, j, cases;
	int n, m, len1, index;
	char str1[205];
	while(1)
	{
		scan(n);
		if(n==0)
			break;
		scans(str1);
		len1=strlen(str1);
		m=len1/n;
		index=0;
		fl(i,0,m)
		{
			if(!(i&1))
				fl(j,0,n)
					mat[i][j]=str1[index++];
			else
				rev(j,n-1,0)
					mat[i][j]=str1[index++];
		}
		fl(i,0,n)
			fl(j,0,m)
				cout<<mat[j][i];
		nline;
	}
	return 0;
} 