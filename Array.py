n=int(input())
arr=list(map(int,input().rstrip().split()))
i=0
while (i in range(0,n)):
    x=int(input())
    arr.append(x)
    i+=1
arr.sort(reverse=True)
print(arr)