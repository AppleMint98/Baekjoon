import sys
from collections import deque

input = sys.stdin.readline
n, m = map(int, input().split())
nlist = [list(map(int, input().split())) for i in range(m)]
# 익 : 1, 안익 : 0, 없 : -1

deq = deque()
for i in range(m):
    for j in range(n):
        if nlist[i][j] == 1:
            deq.append((i,j))
#print(deq)

dx = [-1,1,0,0]
dy = [0,0,-1,1]

def bfs():

    while deq:
        x, y = deq.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or ny < 0 or nx >= m or ny >= n:
                continue

            if nlist[nx][ny] == 0:
                nlist[nx][ny] = nlist[x][y] + 1
                deq.append((nx, ny))

bfs()
ans = 0
for i in nlist:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    ans = max(ans, max(i))
print(ans - 1)