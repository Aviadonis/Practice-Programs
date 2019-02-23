#include<stdio.h>
#include<string.h>
void fancy();
int main()
{
  int t;
  scanf("%d",&t);
  while((t!=0 &&t<50))
  {
    fancy();
    t--;
  }
  return 0;
}
void fancy()
{
  char s[100];
  scanf("%*[\n]%[^\n]",s);
  if(strstr(s,"not "))
    printf("Real Fancy\n");
  else
    printf("regularly fancy\n");
}