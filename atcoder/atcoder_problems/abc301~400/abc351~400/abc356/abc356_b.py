N, M = map(int, input().split())
A = list(map(int, input().split()))
X = [list(map(int, input().split())) for _ in range(N)]

ok = True
for i in range(M):
    check = 0
    for j in range(N):
        check += X[j][i]
    if check < A[i]:
        ok = False
        break

if ok:
    print("Yes")
else:
    print("No")
