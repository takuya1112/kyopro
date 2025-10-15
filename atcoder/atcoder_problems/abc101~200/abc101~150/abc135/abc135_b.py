N = int(input())
P = list(map(int, input().split()))


P_sort = sorted(P)
ok = False

for i in range(N):
    for j in range(N):
        P[i], P[j] = P[j], P[i]
        if P == P_sort:
            ok = True
        P[i], P[j] = P[j], P[i]


if ok:
    print("YES")
else:
    print("NO")
