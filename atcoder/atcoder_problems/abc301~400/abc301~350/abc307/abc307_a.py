N = int(input())
A = list(map(int, input().split()))

for i in range(N):
    ans = 0
    for j in range(7):
        ans += A[i*7 + j]
    print(ans, end=" ")
print()
