#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,t;
    scanf("%d",&t);
    if(t<11 && t>0)
    {
        i=1;
    while(i<=t)
    {
        i++;
        char a[10000];
        scanf("%s",&a);
        for(j=0;j<=10000;j+2)
            printf("%s",a[j]);
        for(k=1;k<=10000;k+2)
            printf("  %s\n",a[k]);
    }
        i=1;
    }return 0;
}



