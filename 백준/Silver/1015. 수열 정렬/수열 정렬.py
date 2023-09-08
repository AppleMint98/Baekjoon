import sys
input = sys.stdin.readline

n = int(input())
nlist = list(map(int, input().split()))
sorted_nlist = sorted(nlist)
ndict = { i : sorted_nlist[i] for i in range(n)}
ndict_items = list(ndict.items())
for i in nlist:
    for key, value in ndict_items:
        if value == i:
            ndict_items.remove((key,value))
            print(key, end = ' ')
            break
