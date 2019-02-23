#include<stdio.h>
int prim(int*,int*);
int main()
{
  int t;    //testcases
  int a,b;  //Limits
  int i;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d %d",&a,&b);
    prim(&a,&b);
  }
  return 0;
}
int prim(int* a,int* b)
{
  int j=1,k,ctr=0;
  for(k=*a;k<*b;k+2)
  {
    int p;
    ctr=0;
    for(p=1;p<k;p++)
    {
      if(k%p==0)
      ctr++;
    }
    if(ctr==1)
    printf("%d\t",k);
  }
  return 0;
}