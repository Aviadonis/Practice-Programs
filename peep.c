#include<stdio.h>
int main()
{
    int t,i,ctr,n;
    scanf("%d",&t);
    while(t--)
    {
        ctr=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        if(n)
        {
            if(s[0]=='0' && s[1]=='0')
        {
            s[0]='1';
            ctr++;
        }
        if(s[n-1]=='0' && s[n-2]=='0')
        {
            s[n-1]='1';
            ctr++;
        }
        for(i=0;i<n-2;i++)
        {
            if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0')
            {
                ctr++;
                s[i+1]='1';
            }
        }
        printf("%d\n",ctr);
        }
        else
        	printf("1\n");
    }
    return 0;
}