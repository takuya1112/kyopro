N, M = map(int, input().split())
S = list(map(str, input().split()))
T = list(map(str, input().split()))
T = set(T)

for i in range(N):
    if S[i] in T:
        print("Yes")
    else:
        print("No")