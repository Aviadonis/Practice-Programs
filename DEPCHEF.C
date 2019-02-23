#include<stdio.h>
int func();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    func();
    }
}
int func()
{
    int n,i;
    scanf("%d",&n);
    int a[n],d[n];
    for(i=0; i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {scanf("%d",&d[i]);}
    int damage[n];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            damage[i]=a[i+1]+a[n-1];
        }
        else if(i==n-1)
        {
            damage[i]=a[0]+a[i-1];
        }
        else
        {
            damage[i]=a[i-1]+a[i+1];
        }    
    }
    for(i=0;i<n;i++)
    {
        if(damage[i]<d[i])
        {
            printf("\n%d\n",&d[i]);
        }
    }
    return 0;
}