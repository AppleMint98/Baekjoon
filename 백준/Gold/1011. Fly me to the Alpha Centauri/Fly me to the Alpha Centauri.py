import sys
input = sys.stdin.readline


t = int(input())

# n**2, n*(n+1) 이 기준점
for i in range(t):
    x, y = map(int, input().split())
    distance = int(y-x)

    # 규칙 맞는 n 구하기
    n = 0
    while distance > n*(n+1):
        n += 1

    # 3,4는 n**2 보다 작거나 같으므로 3개 -> n*2-1
    # 5,6은 나머지 -> n*2 개
    print(n*2-1 if distance <= n**2 else n*2)

