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
	int i, j, cases;
	int steps, len1, k, ind;
	char revstr1[3005], str1[3005];
	int arr[3005], hash[30];
	scan(cases);
	wl(cases) 
	{
		
		scans(str1);
		scanf("%d", &ind);
		len1=strlen(str1);
		steps=len1-ind;
		
		ind=0;
		for(i=len1-1;i>=0;i--)
		{
			revstr1[ind++]=str1[i];
			//print(cases);
		}
		revstr1[ind]='\0';
		fl(i,0,30)
			hash[i]=0;
			
		fl(i,0,len1)
		{
			j=int(revstr1[i]-'a');
			hash[j]++;
		}
		
		ind=0;
		fl(i,0,26)
		{
			if(hash[i]>0)
			{
				fl(j,0,hash[i]) 
				{
					str1[ind++]=char(i+'a');
				}
			}
		}
		
		k=0;
		fl(i,0,26) 
		{
			if(hash[i]>0)
			{
				ind=0;
				fl(j,0,hash[i])
				{
					while(ind<len1)
					{
						if(revstr1[ind]==char(i+'a'))
							arr[k++]=ind;
						ind++;
					}
				}
			}
		}
		
		fl(i,0,len1)
		{
			str1[i]=revstr1[steps];
			steps=arr[steps];
		}
		str1[i]='\0';
		
		prints(str1);
	}
	return 0;
} 