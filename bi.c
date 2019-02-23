#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int t,i=1,j,k;
	scanf("%d", &t);
	char arr[200];
	for(i=1;i<=t;i++)
	{
		scanf("%s",arr);
		for(j=0;j<strlen(arr);j+=2)
		{
		printf("%c",arr[j]);
		}
		printf("	");		
		for(k=1;k<strlen(arr);k+=2)
		{
		printf("%c",arr[k]);
		}
		printf("\n");
	}
	return 0;
	
}
