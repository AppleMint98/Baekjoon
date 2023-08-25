import sys
input = sys.stdin.readline
n = int(input())
nlist = list(map(int, input().split()))
nlist.sort()

left, right = 0, n-1
gap = 1e10
ans_list = []

while left < right:
    ans_sum = nlist[left] + nlist[right]

    if abs(ans_sum) < abs(gap):
        gap = ans_sum
        ans_list = [nlist[left], nlist[right]]

    if ans_sum == 0:
        break
    elif ans_sum < 0:
        left += 1
    else:
        right -= 1


print(*ans_list)
