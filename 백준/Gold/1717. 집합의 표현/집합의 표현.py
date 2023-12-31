import sys
input = sys.stdin.readline

# DSU
# https://doing7.tistory.com/82
# https://yoongrammer.tistory.com/102

def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    if a != b:
        parent[b] = a

n, m = map(int, input().split())
parent = [i for i in range(n + 1)]

for _ in range(m):
    k, a, b = map(int, input().split())

    if k == 0:
        union_parent(parent, a, b)

    if k == 1:
        if find_parent(parent, a) == find_parent(parent, b):
            print('YES')
        else:
            print('NO')
