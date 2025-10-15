N = int(input())
A = list(map(int, input().split()))

check = [0] * N

check[1] = check[0] + abs(A[0] - A[1])

for i in range(2,N):
    check[i] = min(check[i-1] + abs(A[i] - A[i-1]), check[i-2] + abs(A[i] - A[i-2]))

print(check[-1])
