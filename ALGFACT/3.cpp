//Author : pakhandi
using namespace std;
 
#include<iostream>
 
int a[2000], x=0, temp, k=0, n=0, index=0,len=0;
 
void mult(int c)
{
          
          int i=0;
          temp=0;
          //for(i=0; i<=len; i++)
          //         arr[i]=a[i];
          for(i=0; i<=len; i++)
          {
                   x=a[i]*c+temp;
                   a[i]=x%10;
                   temp=x/10;
          }
          if(temp!=0)
          {
              while(temp!=0)
              {
                     a[i++]=temp%10;
                     temp/=10;
              }
          }
          len=i-1;
}
 
void factof(int b)
{
     for(int j=1 ; j<=b; j++)
     {
             mult(j);
     }
}
 
int main()
{
    cin>>k;
    for(int it=1; it<=k ; it++)        
    {
             a[0]=1;
             cin>>n;
             len=0;
             factof(n);
             for(int j=len ; j>=0; j--)
               cout<<a[j];
             cout<<"\n";  
    }                         
    return 0;
}  