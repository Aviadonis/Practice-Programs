#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(int*);
int game();
int main()
{
  int t;
  scanf("%d",&t);
  while(t){
    game();
    t--;
  }
  return 0;
}
bool isprime(int*num)
{
  int ctr=0,i;
  for(int i = 2; i*i < sqrt(*num); i++)
  {
    if(*num%i==0)
    ctr++;
  }
  if(!ctr)
    return true;
}
int game()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];
  for( i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int alice=0,bob=0,bulb=0;
  bool pop;     //bulb is 1 when alice has played and it is bob's turn next
  for( i = 0; i < n; i++)
  {
    pop=isprime(&arr[i]);
    if(pop==true)
    {
      if(bulb==0)
      {
        arr[i]=1511;
        alice++;
        bulb=1;
      }
      if(bulb==1)
      {
        arr[i]=1511;
        bob++;
        bulb=0;
      }
    }
    else if(arr[i]%2==0&&pop==false)
    {
      arr[i]=1511;
      bob++;
      bulb=0;
    }
    else if(arr[i]%2!=0&&pop==false)
    {
      arr[i]=1511;
      alice++;
      bulb=1;
    }
  }
  if(alice<bob)
  printf("Bob\n");
  else //if(bob<alice)
  printf("\nAlice");
  return 0;
}