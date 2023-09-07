from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
deq = deque()

for i in range(n):
    s = input().rstrip()

    if s[:4] == 'push':
        _, k = s.split()
        deq.append(k)

    elif s == 'pop':
        if len(deq) == 0:
            print(-1)
        else:
            print(deq.pop())

    elif s == 'size':
        print(len(deq))

    elif s == 'empty':
        if len(deq) == 0:
            print(1)
        else:
            print(0)

    elif s == 'top':
        if len(deq) == 0 :
            print(-1)
        else:
            print(deq[-1])

