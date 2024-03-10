# 회의가 끝나는 것과 동시에 다음회의 시작 가능
# 회의가 시작하자마자 끝 가능

import sys
n = int(sys.stdin.readline())

meetings = []
for i in range(n):
    a,b = map(int, sys.stdin.readline().split())
    meetings.append((a, b))

meetings = sorted(meetings, key = lambda x: (x[1],x[0]))
#print(meetings)

cnt = 1
finish = meetings[0][1]
#print('start: ',meetings[0][0])
#print('finish: ', finish)
meetings.pop(0)

for meeting in meetings:
    if finish <= meeting[0]:
        cnt +=1
        finish = meeting[1]
        #print('start: ', meeting[0])
        #print('finish: ', finish)

print(cnt)