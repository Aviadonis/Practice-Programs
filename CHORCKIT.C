#include<stdio.h>
int main()
{
    int n,m,a,x,r;
    scanf("%d %d %d %d %d",&n,&m,&a,&x,&r);
    char s[n],t[m][n],p[a][n];
    int c[m],q[a];
    scanf("%s",&s);
    for(int i=0;i<m;i++)
    {
        scanf("%s %d",&t[i][i],&c[i]);
    }
    for(i=0;i<a;i++)
        scanf("%s %d",&p[i][i],&q[i]);
    printf("%d")
        
}       //end of main