import sys
input = sys.stdin.readline

# 처음은 무조건 W
# W 개수만큼 H 나올 수 있음
# -> n*2 개의 W, H를 배열하되, W개수가 H개수보다 많도록
# i,j를 각각 H,W의 개수라 생각하고 2차원DP

if __name__ == '__main__':

    dp = [[0 for _ in range(31)] for _ in range(31)]

    for j in range(1, 31):
        dp[0][j] = 1

    for i in range(1, 31):
        for j in range(30):
            if j == 0:
                dp[i][j] = dp[i - 1][j + 1]
            else:
                dp[i][j] = dp[i - 1][j + 1] + dp[i][j - 1]

    while True:
        n = int(input())

        if n == 0:
            break

        print(dp[n][0])
