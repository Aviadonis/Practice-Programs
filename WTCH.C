#include<stdio.h>
int count(int*);    //for counting no. of nightwatch possible
int main()  //driver function
{
  int t,n;
  scanf("%d",&t);
  while(t--&& t<1000)
  {
    scanf("%d",&n);
    if(n<10^6)
    count(&n);
  }
  return 0;
}
int count(int* n)
{
   char s[*n];
  scanf("%s",s);
  int i,p=*n,ctr=0;
    for(i=0;i<p-2;i++)
  {
    if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0')
      {
        s[i+1]='1';
        ctr++;
      }
  }
    if(p>1)
    {  if(s[0]=='0'&&s[1]=='0')
      {
        s[0]='1';
        ctr++;
      }
    if(s[p-1]=='0'&&s[p-2]=='0')
    {
      s[p-1]='1';
        ctr++;
    }
    }
  printf("%d\n",ctr);
  return 0;
}