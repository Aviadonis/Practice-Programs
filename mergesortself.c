//Merge Sort Algorithm
#include <stdio.h>
void merge(int a[], int l, int m, int r)
{
	int n1, n2,i,j,k;
	n1=m-l+1;	//calculating length of left array
	n2=r-m;	//calculating length of right array
	int L[n1], R[n2]; //making left and right arrays
	for(i=0;i<n1;i++) /*pasting info from array into left and right array*/
		L[i]=a[l+i];
	for(j=0;j<=n2;j++)
		R[j]=a[m+1+j];
	i=0;j=0;k=l; 		//initializing the first index of both the arrays to zero
	while(i<n1 && j<n2)  
	{
		if(L[i]<R[j]) 	//performing a test for smaller number 
		{
			a[k]=L[i];   //pasting the element to left array
			i++;
		}
		else
		{
			a[k]=R[j];   //pasting element to right array
			j++
		;}
		k++;   			//incrementing the index of sorted array
	}
	while(i<n1)			//pasting any elements left in the Left array to the sorted array
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2) 			//pasting any elements left in the right array to the sorted array
	{
		a[k]=R[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l, int r) //Function for dividing the array into smaller parts
{
	if(l<r)
	{
		int m;		//for assigning the middle of the array
		m=l+(r-l)/2;		//for large arrays
		mergesort(a,0,m);	//dividing into the left array
		mergesort(a,m+1,r);	//dividing into the right array
		merge(a,l,m,r);		//merging and sorting the left and right arrays
	}
}
print(int a[],int  size) 	/*for printing the array*/
{
	int i;
	for(i=0;i<size;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int main()					//DRIVER FUNCTION
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	print(a,sizeof(a)/4);
	return 0;
}
