#include <stdio.h>
int total=0;
int func(); //actual working thing
int main()  //controller shit
{
  int t, ctr=1;
  scanf("%d",&t);   //TAKING TESTCASES
  while(t>0 && t<1001 && ctr<=t && total <2*10^5)  //subtask 1 & subtask 4 
  {
    func();
    ctr++;  //counter
  }
  return 0;
}
int func()
{
  int p=0,temp;
  long int n;   //hopefully, subtask 2
  scanf("%d",&n);
  total+=n;
  int arr[n];
  while(p<n)
  {
    scanf("%d",&temp);
    while(temp<=n && temp>0)  //subtask 3
    arr[p]=temp;
    p++;
  }
  int i=1,j=3,g,k;
  k=arr[i];
  g=arr[j];
  if(arr[i]!=arr[j] && arr[k]==arr[g])
  printf("Truly Happy");
  else
  printf("Poor Chef");
  return 0;
}