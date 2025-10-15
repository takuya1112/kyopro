Q = int(input())

peopole = []
select = 0
for i in range(Q):
    q = list(map(int, input().split()))
    if q[0] == 1:
        peopole.append(q[1])
    else:
        print(peopole[select])
        select += 1