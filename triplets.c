#include<stdio.h>
int main()
{
    int a[3],b[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    int scorea=0,scoreb=0;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {scorea++;}
        else if(a[i]<b[i])
        {scoreb++;}
        else
        {continue;}
    }
    int fin[2];
    fin[0]=scorea,fin[1]=scoreb;
    for(i=0;i<2;i++)
    printf("%d ",fin[i]);
    return 0;
}