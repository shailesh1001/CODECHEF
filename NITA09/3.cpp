using namespace std;
 
#include<iostream>
 
int main()
{
    char arr[51], temp;
    int no, count=0, i, j;
    scanf("%d",&no);
    scanf("%s",arr);
    for(i=0; i<no; i++)
    {
        temp=arr[i];
        for(j=i+1; arr[j]==temp; j++, count++)
        i=j-1;
    }
    cout<<count; 
    return 0;
} 