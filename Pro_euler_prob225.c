#include<stdio.h>
int main()
{
  int t1,t2,t3,k,n=1,j=0,p=0,lol;
  scanf("%d %d %d %d",&t1,&t2,&t3,&k);    //Taking reqd inputs
  int i=3,seq[50];
  seq[0]=t1,seq[1]=t2,seq[2]=t3;
  for(i;i<50;i++)
    seq[i]=seq[i-1]+seq[i-2]+seq[i-3];    //Sequence creation till 50 units
  int oddarr[10];
  int check=1;    //to check if an odd numbers divides all numbers
  for(n=1;n<350;n=n+2)
  {
    for(j=0;j<50;j++)
    {
      if(seq[j]%n==0){
      check=check*0;}
      else{
      check=check*1;}
    }
    if(check==1)
    {
      oddarr[p]=n;
      p++;
    }
  }
  for(lol=0;lol<11;lol++)
  printf("\n%d",oddarr[lol]);
}