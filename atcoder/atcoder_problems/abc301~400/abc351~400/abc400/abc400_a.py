A = int(input())

ans = 400 / A
if 400 % A == 0:
    print(int(ans))
else:
    print(-1)