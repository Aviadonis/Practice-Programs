#include<stdio.h>
#include<string.h>
int main()
{
  int t,k;
  long long n;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&k);
    int arr[n][n];
    memset(arr,0,n*n*sizeof(arr[0][0]));      //sets 0 to entire 2d array
    int r,c;
    while(k--){               //Takes input and places 1 as flag for position of rooks
      scanf("%d %d",&r,&c);
      arr[r][c]=1;
      r=c,c=0;
    }
    int i=0,j=0,p=0;   //row_counter and column_counter
    int holder[k];    //array to hold positions of rooks
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      if(!arr[i][j])
      {
        holder[p]=((i+1)*10)+(j+1);
        p++;
      }
    }
    int x;
    for(x=0;x<n;x++)
    {
      c=holder[x]%10;
      r=holder[x]/10;
    }
    
    printf("%d ",(n-k));   
  }   //end of main  
}