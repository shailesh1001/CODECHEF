//Author : pakhandi
 
using namespace std;
 
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
//#include<conio.h>
#include<iomanip>
#include<ctype.h>
#include<time.h>
 
int main()
{
	int cases, nc, n, r, total, max_n, max_total, i, len;
	char arr[10], arr1[5], cn[15], b_car[15];
	scanf("%d", &cases);
	while(cases--)
	{
		max_n=0;
		max_total=0;
		scanf("%d", &nc);
		while(nc--)
		{
			
			scanf("%s", &cn);
			scanf("%s", &arr);
			len=strlen(arr);
			int j=1;
			n=0;
			for(i=len-1; i>=1; i--)
			{
				int temp=arr[j]-48;
				//cout<<pow(temp,i);
				n=n+(temp*(pow(10,i-1)));
				j++;
			}
			scanf("%s", &arr1);
			len=strlen(arr1);
			if(len==4)
				r=100;
			else
			{
				r=((int)(arr1[0]-48)*10) + ((int)(arr[1]-48));
			}
			total=n+((r/100)*n);
			if(total>=max_total)
			{
				if(n>max_n)
				{
					max_n=n;
					strcpy(b_car,cn);
					max_total=total;
				}
			}
		}
		printf("%s\n", b_car);
	} 
	return 0;
}
  