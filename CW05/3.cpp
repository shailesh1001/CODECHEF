using namespace std;
 
#include<iostream>
#include<math.h>
 
int main()
{
    int no;
    while(cin>>no)
    { 
        int i=1, y=-1, count=0;
        while(y!=0)
        {          
            y=no/pow(5,i);
            count+=y;
            i++;
        }
        cout<<count<<"\n";        
    }   
    return 0;
}     
 