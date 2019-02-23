#include <stdio.h>
int main()
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==2)
			printf("%d\n",i);
	}
	return 0;
}
