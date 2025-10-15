N = int(input())
A = list(map(int, input().split()))

count = [0] * N
for i in range(len(A)):
    a = A[i] -1
    count[a] += 1

ans = 0
for i in range(N):
    if count[i] != 4:
        ans = i+1

print(ans)