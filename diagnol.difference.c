#include"stdio.h"
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);     //sq matrix
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1=0,rot=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=arr[i][rot++];
    }
    rot=n-1;
    for(i=0;i<n;i++)
    {
        sum2+=arr[i][rot--];
    }
    printf("%d",abs(sum1-sum2));
}