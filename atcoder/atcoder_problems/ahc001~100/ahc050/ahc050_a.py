N, M = map(int, input().split())
S = [list(input()) for _ in range(N)]


for i in range(N):
    for j in range(N):
        ok = True
        if S[i][j] == ".":
            for i2, j2 in [[i+1, j], [i-1, j], [i, j+1], [i, j-1]]:
                if 0 <= i2 < N and 0 <= j2 < N:
                    if S[i2][j2] == "#": ok = False
            if ok:
                print(i, j)
                S[i][j] = '#'

def pick_Best(n):
    C = 0
    for i in range(N):
        for j in range(N):
            cnt = 0
            if S[i][j] == ".":
                for i2, j2 in [[i+1, j], [i-1, j], [i, j+1], [i, j-1]]:
                    if 0 <= i2 < N and 0 <= j2 < N:
                        if S[i2][j2] == ".": cnt += 1 
                if cnt == n:
                    print(i, j)
                    S[i][j] = "#"
                    C += 1
    return C

for i in [3, 1, 2]:
    while True:
        if pick_Best(i): break

for i in range(N):
    for j in range(N):
        if S[i][j] == ".":
            print(i, j)
