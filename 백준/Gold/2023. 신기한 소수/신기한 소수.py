import sys
input = sys.stdin.readline

n = int(input())

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False
    return True

ans = [0]
num_list = [1,2,3,5,7,9] # 짝수가 들어가면 신기한소수조건 걸림

def make_new_num(ans,num_list):
    tmp = []
    for i in ans:
        for j in num_list:
            new_num = int(i * 10 + j)
            if is_prime(new_num):
                tmp.append(new_num)
    ans = tmp
    return ans

for i in range(n):
    ans = make_new_num(ans,num_list)

for i in ans:
    print(i)