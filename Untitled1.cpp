#include <stdio.h>
int main()
{
	int t,i,k,l,j,t1,t2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&t1,&t2);
		for(j=t1;j<=t2;j++)
		{
			k=0;
			if(t1==1)
			continue;
			for(l=2;l<j/2;l++)
			{
				if(j%l==0)
				k++;
				
			}
		if(k==0)
		printf("%d\n",j);	
		}
		
	}
return 0;	
}
