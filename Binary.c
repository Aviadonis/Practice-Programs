#include <stdio.h>
#include <string.h>
int convert(int n);   //Conversion function prototype
//int one(int number);  //Printing 1s in binary number
int main()
{
  int n,bin;
  scanf("%d",&n);   //Taking the number
  bin=convert(n);   //Holding the converted binary number 
  //one(bin);         
  return 0;
}
int convert(int n)         //Converts decimal nos to binary
{
  int temp,i=0;
  const char str,*cat,*pat;
  char fin[10],rev[10];
  while(n>0)
  {
    temp=n%2;
    n=n/2;
    str = (char) temp;  //Typecasting int to char
    strcat(fin,str);
  /*}
  for(i=fin.length()-1;i>0;i--)
  strcat(rev,fin[i]);*/
  printf("%s",strrev(fin));
  return 0;
}