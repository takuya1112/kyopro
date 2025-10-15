N = int(input())
S = [input() for _ in range(N)]

first = ["H", "D", "C", "S"]
second = ["A", "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K"]

ok = True
for i  in range(N):
    if S[i][0] not in first or S[i][1] not in second:
        ok = False
        

for i in range(N-1):
    for j in range(i+1, N):
        if S[i] == S[j]:
            ok = False

if ok:
    print("Yes")
else:
    print("No")
