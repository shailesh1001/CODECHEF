using namespace std;
 
#include<iostream>
 
int main()
{
    int no;
    while(cin>>no)
    {
        int sum=1;
        for(int i=2; i<=no/2; i++)
        {
            if(no%i==0)
                sum+=i;
        }
        cout<<sum<<"\n";;
    }
    return 0;
}
 