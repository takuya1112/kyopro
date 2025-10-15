N = int(input())
A = list(map(int, input().split()))
A.sort()
len_A = len(A) - 1

ans = 0
for i in range(N,N * 3,2):
    ans += A[i]

print(ans)