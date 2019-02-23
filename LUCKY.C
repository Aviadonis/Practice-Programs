#include<stdio.h>
int game(int* ,int*,int*,int a[]);
int main()
{
  int t,n,a,b,i;
  scanf("%d",&t);
  while(t!=0)
  {
    scanf("%d %d %d",&n,&a,&b); 
    if(a==0||b==0)
    return 0;          //a is lucky for Bob
    int arr[n]; 
    int p=n;                          //b is lucky for Alice
    for(i=0;i<n;i++)                      //First turn is of Bob
      scanf("%d",&arr[i]);
    t--;
    game(&a,&b,&p,arr);
  }
  return 0;
}
int game(int*a,int*b,int*n,int arr[])
{
  int i,lb=*a,la=*b,flagbob=0,flagalice=0;    //lb is lucky bob
  for(i=0;i<*n;i++)                          //la is lucky alice
  {
    if(arr[i]%lb==0)
    {
      arr[i]=1511;
      flagbob++;
    }
  else if(arr[i]%la==0)
    {
      arr[i]=1511;
      flagalice++;
    }
  }
  if(flagalice>flagbob)
  printf("ALICE\n");
  else
  printf("BOB\n");
  return 0;
}