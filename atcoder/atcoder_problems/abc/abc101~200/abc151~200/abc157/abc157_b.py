A = [list(map(int, input().split())) for _ in range(3)]
check = [[False] * 3 for _ in range(3)]

N = int(input())
for _ in range(N):
    b = int(input())
    for i in range(3):
        for j in range(3):
            if b == A[i][j]:
                check[i][j] = True

bingo = False
for i in range(3):
    if check[i][0] and check[i][1] and check[i][2]:
        bingo = True
        break
    if check[0][i] and check[1][i] and check[2][i]:
        bingo = True
        break

if check[0][0] and check[1][1] and check[2][2]:
    bingo = True
if check[2][0] and check[1][1] and check[0][2]:
    bingo = True

if bingo:
    print("Yes")
else:
    print("No")