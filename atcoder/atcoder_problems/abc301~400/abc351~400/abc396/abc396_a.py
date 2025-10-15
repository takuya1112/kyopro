N = int(input())
A = list(map(int, input().split()))

ans = False
for i in range(N - 2):
    if A[i] == A[i+1] and A[i] == A[i + 2]:
        ans = True

if ans:
    print("Yes")
else:
    print("No")