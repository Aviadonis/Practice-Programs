#include <stdio.h>
int func()                  //Function declaration for taking a and b and using them
int main(int argc, char const *argv[])  //Main function
{
  int t,n=1;
  scanf("%d",&t);
  while(n<=t)
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
  while(a!=b)
  {
    a=a+d;
    b=b+(d-1)
  }
  if(a==b)
  printf("YES");
  else
  printf("NO");
  return 0;
}