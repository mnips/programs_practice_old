n,m=map(int,input().split())
ans=0
for i in range(n,m):
    sum=0
    sum=sum+bin(i).count('0')
    #k=math.log(i,2)+1
    if sum==1:
        ans=ans+1
print (ans)
