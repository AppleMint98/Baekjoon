import sys
input = sys.stdin.readline

if __name__ == '__main__':
    n = int(input())
    dp = [0 for _ in range(301)]
    stairs = [0 for _ in range(301)]
    for i in range(1, n + 1):
        stairs[i] = int(input())

    dp[1] = stairs[1]
    dp[2] = stairs[1] + stairs[2]
    dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3])
    # dp[4] = max(dp[2] + stairs[4], dp[1] + stairs[3] + stairs[4])

    for i in range(4, n+1):
        dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i])

    print(dp[n])