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
 
int main()
{
	char mat[4][4];
	int i,j;
	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			scanf(" %c",&mat[i][j]);
		}
	
	}
	int f;
	f=0;
	int ct1,ct2;
	ct1=ct2=0;
	for(i=0;i<=2;++i)
	{
		for(j=0;j<=2;++j)
		{
		  if(mat[i][j]=='a')	
		  	ct1++;
		  else
		  	ct2++;
		  if(mat[i][j+1]=='a')
		  	ct1++;
		  else
		  	ct2++;
		  if(mat[i+1][j+1]=='a')
		  	ct1++;
		  else
		  	ct2++;
		  if(mat[i+1][j]=='a')
		  	ct1++;
		  else
		  	ct2++;
		  if(ct1<2||ct2<2)
		  	f=1;
		  ct1=0;ct2=0;
		}
	}
	if(f)
    	cout<<"POSSIBLE\n";
    else
    	cout<<"NOT POSSIBLE\n";
	return 0;
}
 