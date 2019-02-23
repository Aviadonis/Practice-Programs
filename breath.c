#include <stdio.h>
void Display(int a[],int n);  //function prototype
void Insert(int a[]);
void Delete(int a[]);
void RemoveDuplicates(int a[]);
void Replace(int a[]);
void Search(int a[]);
int main()
{
  int i,n,ch;
  scanf("%d",&n);     //taking length of array
  int arr[n];
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
    default:printf("Wrong choice entered. Self destructing in 3... 2... 1...\n\\Haha just kidding;");
    break;
  }
  return 0;
}
void Display(int a[], int n)    //function definition
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("The array is\v %d ",a[i]);
  }
}
