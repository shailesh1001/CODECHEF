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
    unsigned long int cases, n, j;//arr[50000], temp_arr[50000];
    cin>>cases;
    while(cases--)
    { 
        scanf("%d",&n);
        j=1;
        while(j<n)
            j=j<<1;
        if(j>n)           
            cout<<j/2<<"\n";
        else
            cout<<j<<"\n";
    }    
    return 0;
}  