#include <stdio.h>
int main()
{
        int n,rem,res,final,rem1,j;
        final=0;
        res=0;
        int i=0;
		scanf("%d",&n);
        int a[n];
        while(n>0)
        {
                rem=n%2;
                n=n/2;
                a[i]=rem;
                ++i;
        }
        
        for(j=10;j>0;j--)
        {
        	printf("%d\n ",a[j]);
		}
        return 0;
}
