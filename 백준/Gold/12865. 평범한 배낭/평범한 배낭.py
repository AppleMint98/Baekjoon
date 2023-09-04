import sys
input = sys.stdin.readline

# https://huiyu.tistory.com/entry/DP-01-Knapsack%EB%B0%B0%EB%82%AD-%EB%AC%B8%EC%A0%9C
# https://claude-u.tistory.com/208

n,k = map(int, input().split())
nlist = [[0,0]] + [list(map(int, input().split())) for i in range(n)]
dlist = [[0 for _ in range(k+1)] for _ in range(n+1)]
# print(nlist, dlist)

for i in range(1, n+1):
    for j in range(1, k+1):
        w, v = nlist[i][0], nlist[i][1]

        if j < w:
            dlist[i][j] = dlist[i-1][j]
        else:
            dlist[i][j] = max(v + dlist[i-1][j-w] , dlist[i-1][j])
            
print(dlist[n][k])