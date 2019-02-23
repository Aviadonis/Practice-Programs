#include <stdio.h>
int func();                  //Function declaration for taking a and b and using them
int main()  //Main function
{
  int t,n=1;
  scanf("%d",&t);//Taking testcases
  while(n<=t && t>=1 && t<=1000)
  {
    func();
    n++;
  }
  return 0;
}
int func()
{
  int a,b,d;
  scanf("%d" "%d",&a,&b);
  d=8;
  while(a>0 && a<=10^9 && b>0 && b<=10^9)
  {
    while(a!=b)
    {
      a=a+d;
      b=b+(d-1);
    }
  }
  if(a==b)
  printf("YES");
  else
  printf("NO");
  return 0;
}