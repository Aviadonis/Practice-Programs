testcases=input()
kk=0
j=0
for kk in range(testcases):
  n=input()
  testcases-=1
  s[n]
  s=input()
  ctr=0
  for j in range(n):
    if(j>0):
      l=s[j-1]
    if(j<n):
      r=s[j+1]
    if(s[j]==0 and r==0 and j==0):
      s[j]=1
      ctr+=1
    if(j==n-1 and l==0 and s[j]==0):
      s[j]=1
      ctr+=1
    if(s[j]==0 and l==0 and r==0):
      s[j]=1
      ctr+=1
    print(ctr,'\n')