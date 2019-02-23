#include <stdio.h>
struct peg{             //Structure for creating Pegs 
  int disc;
};
int hanoi(int,int);             //Function prototype for Hanoi
struct peg A,B,C;
int print(int);            //Function prototype for printing      
int  main()
{
  int i,n;
  int c=1;
printf("Enter the number of discs.");
scanf("%d",&n);
printf("\nA \t B \t C\n");
A.disc=n;         //Storing all the discs in peg A
B.disc=0;
C.disc=0;
int count=1;
hanoi(count,c);
for(i=0;i<n;i++)
printf("~\n");
return 0;
}
int hanoi (int count,int c)
{
  
  
    B.disc=count;
    C.disc=(count+1);
  
  count+=2;
  c++;
  print(c);
  hanoi(count,c);
}
int print(int c)
{
  int i,j,k;
  printf("/nAfter %d pass/step/n",c);
  printf("\nA\tB\tC");
  for(i=1;i<=A.disc;i++)
  printf("~\n");
  for(j=1;j<=B.disc;j++)
  printf("\t~\n");
  for(k=1;k<=C.disc;k++)
  printf("\t\t~\n");
  return 0;
}
