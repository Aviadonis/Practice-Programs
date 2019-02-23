#include <stdio.h>
#include <string.h>
struct dict{    //Data Structure for Dictionary
char name[10];
int num;
};
int main()    //Main function
{
  char name1[10];
  int num1,n,i;
  scanf("%d",&n);
  struct dict arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%[^\n]%*c",name1);    //Method to input strings without hassle
    scanf("%d",&num1);
    strcpy(name1,arr[i].name);   //Used strcpy because you can't use assignment operator(=) on strings
    arr[i].num=num1;
  }
  char key[10];
  scanf("%[^\n]*c",key);
  int test;
  for(i=0;i<n;i++)
  {
    test=strcmp(key,arr[i].name);
    if(test==0)
    printf("%s=%d\n",arr[i].name,arr[i].num);
    else
    printf("Not found\n");
  }
  return 0;
}