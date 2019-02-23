#include<stdio.h>
#include<string.h>
void fancy();
int main()
{
  int t;
  scanf("%d",&t);
  while((t!=0))
  {
    fancy();
    t--;
  }
  return 0; 
}
void fancy()
{
  char s[100],temp[3];
  scanf("%s",&s);
  int i;
  for(i=0;i<100;i++)
  {
    if (s[i]=='n')
    {
      temp[0]=s[i];           
      temp[1]=s[i+1];
      temp[2]=s[i+2];
      if(strcmp("not",temp)==0)
        printf("Real Fancy\n");
      else
        printf("regular fancy\n");
      break;
    }
  }
}