#include<stdio.h>
 
int main()
{
    char arr[51];
    int no, count=0, i;
    scanf("%d",&no);
    scanf("%s",arr);
    for(i=1; i<no; i++)
    {
        if(arr[i]==arr[i-1])
            count++;
    }
    printf("%d",count); 
    return 0;
} 