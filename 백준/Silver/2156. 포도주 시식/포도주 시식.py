import sys
input = sys.stdin.readline

n=int(input())
nlist=[0]*10000
for i in range(n):
  nlist[i]=int(input())

d=[0]*10000
d[0]=nlist[0]
d[1]=nlist[0]+nlist[1]
d[2]=max(nlist[2]+nlist[0], nlist[2]+nlist[1], d[1])
for i in range(3,n):
  d[i]=max(nlist[i]+d[i-2], nlist[i]+nlist[i-1]+d[i-3], d[i-1])

print(max(d))