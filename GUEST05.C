#include<stdio.h>
int count();
int main()
{
  int t;
  scanf("%d",&t);     //testcases
  while(t)
  {
    count();
    t--;
  }
  return 0;
}
int count()
{
  int g;
  scanf("%d",&g);
  int a[g],d[g];
  for(size_t i = 0; i < g; i++)
    scanf("%d",&a[i]);
  for(size_t i = 0; i < g; i++)
    scanf("%d",&d[g]);
  int ctr;
  if(g)
  ctr=1;
  else
  ctr=0;
  for(size_t i = 0; i < g; i++)
  {
    for(size_t j = 0; j < g; i++)
    {
      if(d[i]>a[j+1])
      ctr++;
    }
  }
  printf("%d",ctr);
  return 0;
}