using namespace std;
 
#include<iostream>
 
int main()
{
    int n=0;
    float bal=0;
    float left_bal=0;
    scanf("%d%f", &n, &bal);
    if(n%5!=0 || n+0.5>bal)
      left_bal=bal;
    else
        left_bal=bal-n-0.5; 
    printf("%.2f", left_bal);   
    return 0;
}          