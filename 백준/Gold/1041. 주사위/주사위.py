import sys
input = sys.stdin.readline

# n 정육면체의 전체 주사위 개수 : n^3
# n 정육면체의 보이는 주사위 개수 : n^3 - (n-2)^2 * (n-1)

# 1면의 개수 : (n-2)^2 * 5 + (n-2) * 4
# 2면의 개수 : (n-2) * 8 + 4
# 3면의 개수 : 4

# 1,2,3 면의 주사위의 수 합이 n정육면체의 보이는 주사위 수의 합과 같다.
def countDice(n) -> list:
    dice1 = int((n-2)**2 * 5 + (n-2) * 4)
    dice2 = int((n-2) * 8 + 4)
    dice3 = 4
    return [dice1, dice2, dice3]

# (A,F), (B,E), (C,D) 끼리 마주보기 떄문에, 이 중 한가지 값만 가질 수 있다.
# 1Sum은 이 세 값중 하나
# 2Sum은 이 세 값중 둘
# 3Sum은 이 세 값중 셋
# 모든 덧셈 경우를 구한 뒤 최솟값을 골라내면 된다.

def calculateSum(dice) -> list:

    minDiceList = [min(dice[0], dice[5]),
                   min(dice[1], dice[4]),
                   min(dice[2], dice[3])]
    dice1Sum = min(minDiceList)
    dice2Sum = min(minDiceList[0] + minDiceList[1],
                   minDiceList[1] + minDiceList[2],
                   minDiceList[0] + minDiceList[2])
    dice3Sum = sum(minDiceList)

    return [dice1Sum, dice2Sum, dice3Sum]



if __name__ == '__main__':
    n = int(input())
    dice = list(map(int, input().split()))
    if n == 1:
        print(sum(dice) - max(dice))
    else:
        countDiceList = countDice(n)
        calculateSumList = calculateSum(dice)
        print(sum(a * b for a, b in zip(countDiceList, calculateSumList)))


