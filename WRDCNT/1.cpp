using namespace std;
 
#include<iostream>
#include<string.h>
 
int main()
{
    char arr[1001];
    int cases, count, i;
    scanf("%d",&cases);
    char a; cin.get(a);
    while(cases--)
    {
        cin.getline(arr,1001);
        count=1;
        for(i=0; arr[i]!='\0'; i++)
        {
            if(arr[i]==' ')
                count++;
        }
        printf("%d\n",count);
    }
   // int temp;
    //cin>>temp;
    return 0;
}
 