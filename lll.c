#include <stdio.h>
#include <stdlib.h>
void Display(int a[],int n);  //function prototype
void Insert(int *a[], int n);
void Delete(int a[]);
void RemoveDuplicates(int a[]);
void Replace(int a[]);
void Search(int a[]);
int main()
{
  int i,n,ch;
  printf("Enter length of array.\n");
  scanf("%d",&n);     //taking length of array
  int arr[n];
  printf("Enter elements of array.\n");
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
    case 2:Insert(&arr,n);
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
void Insert(int *a[], int n)
{
	int n1,ind,j,i;
	printf("Enter the index where to be inserted.");
	scanf("%d",&ind);
	printf("Enter the number to be inserted");
	scanf("%d",&n1);
	int *ptr=a[0];
	int *ptrnew;
	ptrnew=(int*)realloc(ptr, sizeof(int)*(n+1));
	for(i=n-1;i>=ind;i--)
	{
		*(ptrnew+(i+1))=*(ptrnew+i);
	}
	*(ptrnew+ind)=n1;
	printf("The new array is :\v");
	for(j=0;j<=n;j++)
	{
		printf("%d  ",*(ptrnew+j));
	}
}
