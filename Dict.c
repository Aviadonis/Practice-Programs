#include <stdio.h>
#include <string.h>
struct dict{    //Data Structure for Dictionary
char name[10];
int num;
};
int main()    //Main function
{
  char name1[10],key[10];
  int num1,n,i;
  scanf("%d",&n);
  struct dict arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%s",name1);    //Method to input strings without hassle
    scanf("%d",&num1);
    strcpy(arr[i].name,name1);   //Used strcpy because you can't use assignment operator(=) on strings
    arr[i].num=num1;
  }
  int d,ctr=0,k=1;
  for(d=0;d<n;d++)
  {
    scanf("%s",key);
    int test;
    for(i=0;i<n;i++)
    {
      k=0;
      if(strcmp(key,arr[i].name)==0)
      {
        printf("%s=%d\n",arr[i].name,arr[i].num);
        break;
      }
      k++;
    }
    if(k>=1)
    {
      printf("Not found\n");
    }
  }
  return 0;
}