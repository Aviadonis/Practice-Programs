#include<stdio.h>
int isprime(int x)
{
	int i,l=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			l=1;
			break;
		}
	}
	if(x==1)
	return 0;
	else if(l==1)
	return 1;
	else
	return 2;
}
int main()
{
	int t,t1,t2,i,j,l=0,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&t1,&t2);
		for(j=t1;j<=t2;j++)
		{
			k=isprime(j);
			if(k==2)
			printf("%d\n",j);
		}
		printf("\n");
	}
	return 0;
}
