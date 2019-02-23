#include <stdio.h>
#include <stdlib.h>
void Display(int a[],int n);  //function prototype
void Insert(int *a, int n);
void Delete(int a[]);
void RemoveDuplicates(int a[]);
void Replace(int a[]);
void Search(int a[]);
int main()
{
  int i,n,ch;
  printf("Enter the number of elements.\n");
  scanf("%d",&n);     //taking length of array
  int arr[n];
  printf("Enter the elements.\n");
  for(i=0;i<n;i++)    //inputting array
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter your choice:\n 1:Display\v 2:Insert\n 3:Delete\v 4:Remove Duplicates\n 5:Replace\v 6:Search\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:Display(arr,n);
    break;
    case 2:Insert(arr,n);
    break;
    default:printf("Wrong choice entered. Self destructing in 3... 2... 1...\n\\Haha just kidding;");
    break;
  }
  return 0;
}
void Display(int a[], int n)    //function definition
{
  int i;
  printf("The array is\v");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
void Insert(int *a,int n)
{
  int i,j,loc,num; 
  int *ptr=a;
  int *ptrnew;
  printf("Enter the location where stuff needs to be inserted.\n");
  scanf("%d",&loc);
  printf("Enter the number to be inserted, Compadre.\n");
  scanf("%d",&num);
  ptrnew=(int*)malloc(sizeof(int)*(n+1));
  for(i=0;i<loc;i++)
  {
    *(ptrnew+i)=*(ptr+i);
  }
  *(ptrnew+loc)=num;
  for(i=loc+1;i<=n;i++)
  {
    *(ptrnew+i)=*(ptr+i-1);
  }
  printf("The new array is as follows:");
  for(j=0;j<=n;j++)
  {
    printf("%d ",*(ptrnew+j));
  }
}
