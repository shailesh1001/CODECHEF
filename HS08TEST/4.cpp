using namespace std;
 
#include<iostream>
 
int main()
{
    int n=0;
    float bal=0;
    float left_bal=0;
    cin>>n>>bal;
    if(n%5!=0 || n+0.5>bal)
      left_bal=bal;
    else
        left_bal=bal-n-0.5; 
    cout<<left_bal;    
    return 0;
}                
 