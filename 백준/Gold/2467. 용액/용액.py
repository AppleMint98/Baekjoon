import sys
input = sys.stdin.readline

n = int(input())
nlist = list(map(int, input().split()))

left, right, tmp  = 0 , n-1, 1e10
ans_list = []

while left < right:
    ans = nlist[left] + nlist[right]

    if abs(ans) < abs(tmp):
        ans_list = [nlist[left], nlist[right]]
        tmp = ans

    if ans == 0:
        break
    elif ans < 0:
        left += 1
    else:
        right -= 1

print(*ans_list)