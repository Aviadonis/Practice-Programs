#include <stdio.h>
int main()
{
	int t,t1,t2,j,l,k;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&t1 ,&t2);
		printf("%d %d",t1,t2);
		for(j=t1;j<=t2;j++)
		{
			k=t1;
			k++;
			k%j==0?(l++0):break
			if(l<=2)
			printf("%d",k);
			
		}
	}
	return 0;
}
