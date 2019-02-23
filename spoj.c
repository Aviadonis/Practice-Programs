#include <stdio.h>
int main()
{
	int t,t1,t2,i,j,l=0,k;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		
		scanf("%d %d",&t1 ,&t2);
		printf("%d %d\n",t1,t2);
		for(j=t1;j<=t2;j++)
		l=0;
		{
			for(k=1;k<=j;k++)
			{
				if(j%k==0)
				{
					l++;
				}
			}
				
			if(l==2)
			{
				printf("%d\n",j);
			}
			
		}
	}
	getch();
	return 0;
}
