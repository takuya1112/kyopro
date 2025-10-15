import math
N = int(input())
for i in range(N):
    j = int(input())
    check = math.sqrt(j)
    if int(check) != check:
        print(-1)
    else:
        a = math.ceil(check / 2)
        b = math.floor(check / 2)
        print(a,b)

