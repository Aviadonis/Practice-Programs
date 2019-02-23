#include <stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i-1]);
  }
  for(i=n;i>0;i--)
  {
    
  printf("%d",a[i-1]);
  printf(" ");
  }
  return 0;
}