//Author : pakhandi
//
 
using namespace std;
 
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
 
#define wl while
#define fl(i,a,b) for(i=a; i<b; i++)
 
int main()
{
	int d, m;
	scanf("%d%d", &d, &m);
	int temp=d%6;
	switch(m)
	{
		case 1 : switch(temp)
				 {
				 	case 1 : printf("1");
				 	break;
				 	case 2 : printf("2");
				 	break;
				 	case 3 : printf("3");
				 	break;
				 	case 4 : printf("4");
				 	break;
				 	case 5 : printf("5");
				 	break;
				 	case 0 : printf("6");
				 	break;
				 }
		break;
		case 2 : switch(temp)
				 {
				 	case 1 : printf("2");
				 	break;
				 	case 2 : printf("3");
				 	break;
				 	case 3 : printf("4");
				 	break;
				 	case 4 : printf("5");
				 	break;
				 	case 5 : printf("6");
				 	break;
				 	case 0 : printf("1");
				 	break;
				 }
		break;
		case 3 : switch(temp)
				 {
				 	case 1 : printf("2");
				 	break;
				 	case 2 : printf("3");
				 	break;
				 	case 3 : printf("4");
				 	break;
				 	case 4 : printf("5");
				 	break;
				 	case 5 : printf("6");
				 	break;
				 	case 0 : printf("1");
				 	break;
				 }
		break;
		case 4 : switch(temp)
				 {
				 	case 1 : printf("1");
				 	break;
				 	case 2 : printf("2");
				 	break;
				 	case 3 : printf("3");
				 	break;
				 	case 4 : printf("4");
				 	break;
				 	case 5 : printf("5");
				 	break;
				 	case 0 : printf("6");
				 	break;
				 }
		break;
		case 5 : switch(temp)
				 {
				 	case 1 : printf("5");
				 	break;
				 	case 2 : printf("6");
				 	break;
				 	case 3 : printf("1");
				 	break;
				 	case 4 : printf("2");
				 	break;
				 	case 5 : printf("3");
				 	break;
				 	case 0 : printf("4");
				 	break;
				 }
		break;
		case 6 : switch(temp)
				 {
				 	case 1 : printf("2");
				 	break;
				 	case 2 : printf("3");
				 	break;
				 	case 3 : printf("4");
				 	break;
				 	case 4 : printf("5");
				 	break;
				 	case 5 : printf("6");
				 	break;
				 	case 0 : printf("1");
				 	break;
				 }
		break;
	}
	return 0;
} 
