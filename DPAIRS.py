n=input()
m=input()
a=list(n)
for i in range(n):
  n=raw_input()
  a.append(int(n))
b=list()
i=0
for i in range(n):
  n=raw_input()
  b.append(int(n))
master=list()
i=0
for i in range(n):
  for j in range(m):
    master.append(a[i]+b[j])
for i in range(n):
  for j in range(m):
    elem=a[i]+b[j]
    if(master.count(elem)==1)
    print(i,"\t"j,"\n")