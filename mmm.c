#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,j,l,m;
	scanf("%d",&n);
	m=2*n;
	char a[n];
	char b[m];
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	for(j=0;j<=2*n;j++)
	{
		scanf(" %c",&b[j]);
	}
	clrscr();
	l=0;
	for(j=0;j<2*n;j++)
	{
	if(a[j]==b[j])
	l++;
	}
	if(l==n)
	printf("A is a substring of B.\n");
	return 0;
}
