N = int(input())
A_B_C_D = [list(map(int, input().split())) for _ in range(N)]

S = [[False] * 101 for _ in range(101)]

for i in range(N):
    A = A_B_C_D[i][0]
    B = A_B_C_D[i][1]
    C = A_B_C_D[i][2]
    D = A_B_C_D[i][3]

    for j in range(A,B):
        for k in range(C,D):
            S[k][j] = True

count = 0
for i in range(101):
    for j in range(101):
        if S[i][j]:
            count += 1

print(count)