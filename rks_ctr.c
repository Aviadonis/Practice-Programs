#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,k,r,c;
		scanf("%ld %ld",&n,&k);
		int row[n+1],column[n+1],row1[n+1],column1[n+1];
		long int i,j,corow=0,cocolumn=0;
		for(i=0;i<=n;i++)
		{
			row[i]=0;
			column[i]=0;
		}
		for(i=1;i<=k;i++)
		{
			scanf("%ld %ld",&r,&c);
			row[r]=1;
			column[c]=1;
		}
		for(i=1;i<=n;i++)
		{
			if(row[i]==0)
			{
				row1[corow]=i;
				corow++;
			}
			if(column[i]==0)
			{
				column1[cocolumn]=i;
				cocolumn++;
			}
		}
		long int p;
		if(corow>=cocolumn) p=cocolumn;
		else p=corow;
		long int s=0;
		printf("%ld ",p);
		for(i=1;i<=p;i++)
		{
			printf("%ld %ld ",row1[s],column1[s]);
			s++;
		}
		printf("\n");
	}
return 0;	
}