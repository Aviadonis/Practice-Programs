#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int t,i=1,j,k;
	scanf("%d", &t);
	char *arr;
	for(i=1;i<=t;i++)
	{
		j=0;k=0; 
		arr=(char *)malloc(100*sizeof(char));
		scanf("%s",&arr);
		for(j=0;j<=100;j+=2)
		{
		printf("%s",arr[j]);
		}		
		for(k=1;j<=100;k+=2)
		{
		printf("  %s\n",arr[k]);
		}free(arr);
	}
	return 0;
	
}
