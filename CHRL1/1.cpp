//Author : pakhandi
//
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iterator>
#include<sstream>
#include<fstream>
#include<cassert>
#include<climits>
#include<cstdlib>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
 
#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)
#define scan(n) scanf("%d", &n)
#define scans(s) scanf("%s", s)
#define scanc(c) scanf("%c", &c)
#define scanp(f) scanf("%f", &f)
#define scanll(l) scanf("%lld", &l)
#define scanllu(u) scanf("%llu", &u)
#define print(n) printf("%d\n", n)
#define prints(s) printf("%s\n", s)
#define printc(c) printf("%c\n", c)
#define printp(f) printf("%f\n", f)
#define printll(l) printf("%lld\n", l)
#define printllu(u) printf("%llu\n", u)
#define nline printf("\n")
#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int
 
 
 
class chaman
{
	public:
		int cost, weight;
}arr[15];
 
bool issmall(class chaman a, class chaman b)
{
 	if(a.cost<b.cost)
 		return 1;
 	else
 		return 0;
}
 
int main()
{
	//freopen("C:\\Users\\DELL\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\DELL\\Desktop\\output.txt","w",stdout);
	int i, j, cases, k=1, n, sum;
	scan(cases);
	wl(cases)
	{
		scan(n); scan(k);
		sum=0;
		fl(i,0,n)
		{
			scan(arr[i].cost);
			scan(arr[i].weight);
		}
		sort(arr,arr+n,issmall);
		fl(i,0,n)
		{
			sum+=arr[i].cost;
			//cout<<sum;
			if(sum>k)
				break;
		}
		print(i);
	}
	return 0;
}
 