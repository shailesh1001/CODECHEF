using namespace std;
 
#include<iostream>
 
int main()
{
    int cases, n, i, j, max, arr[1005], lis[1005];
    scanf("%d",&cases);
    while(cases--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
 
        for(int i=0;i<n;i++)
                lis[i]=1;
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]>=arr[j]&&lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;
            }
            /*for(int k=0; k<10; k++) cout<<lis[k]<<"*";
            cout<<"\n";*/
        }
 
        int max=-1;
        for(int i=0;i<n;i++)
            if(lis[i]>max)
                max=lis[i];
        printf("%d\n",max);
    }
    return 0;
} 
 