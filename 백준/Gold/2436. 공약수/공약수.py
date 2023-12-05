# 유클리드 호제법 https://ko.wikipedia.org/wiki/%EC%9C%A0%ED%81%B4%EB%A6%AC%EB%93%9C_%ED%98%B8%EC%A0%9C%EB%B2%95
# -> 최대공약수를 구하는 알고리즘 중 하나.
# -> 몫 과 나머지를 구해, 나머지로 계속 나눠가면서 나누어떨어질때까지.


import sys

input = sys.stdin.readline
from math import sqrt

g, l = map(int, input().split())

divide = l // g  # a*b = l/g

# 유클리드 호제법
def gcd(a, b):
    if a % b == 0:
        return b  # 최대공약수

    return gcd(b, a % b)


for a in range(int(sqrt(divide)), 0, -1):  # 반대로 돌면서
    b = int(divide / a)  # b = (l/g)/a

    if divide % a == 0 and gcd(a, b) == 1:  # 약수고 서로소면
        print(a * g, b * g)
        break