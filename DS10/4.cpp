using namespace std;
 
#include<iostream>
 
int main()
{
    int no, sum, i;
    while(cin>>no)
    {
        sum=1;
        for(i=2; i<=no/2; i++)
        {
            if(no%i==0)
                sum+=i;
        }
        cout<<sum<<"\n";;
    }
    return 0;
} 