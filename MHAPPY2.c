#include<stdio.h>
int main()
{
  int t;      //cuz t<=15
  scanf("%d",&t);
  while(t-- && t<=15)
  {
    long long int n,k,appy=0,chef=0;    //cuz n,k<=10^18
    int a,b,i=1;              //cuz a,b<10^9
    scanf("%lld %d %d %lld",&n,&a,&b,&k);
    while(i<=n)
    {
      if(i%a==0 && i%b!=0)
      appy++;   //counter for problems solved by appy
      else if(i%b==0 && i%a!=0)
      chef++;   //counter for probs solved by chef
      i++;
    }
    if((appy+chef)>=k)
    printf("Win\n");
    else
    printf("Lose\n");   
  }   //end of while
}     //end of main