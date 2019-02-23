#include<stdio.h>
int main()
{
  int n,m,i,j;    // taking testcases
  scanf("%d %d",&n,&m);
  int a[n],b[m];
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<m;i++)
  scanf("%d",&b[i]);
  int npair=n+m-1;
  int master[n*m],ctr=0,flag,k;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      master[ctr]=a[i]+b[j];
      ctr++;
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      flag=0;
      for(k=0;k<n*m;k++)
      {
        if(a[i]+b[j]==master[k])
        flag++;
      }
      if(flag==1)
      printf("%d\t%d\n",i,j);
    }
  }
  return 0;
}