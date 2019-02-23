#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k=0,i=0,max=0; 
    scanf("%d",&n);
    while(n>0)
    {
        k=n%2;
        if(k==1)
            i=i+1;
        else
            i=0;                
        if(i>max)
                max=i;
        n=n/2;
    }
    printf("%d",max);
    return 0;
}