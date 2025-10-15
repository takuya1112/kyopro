N = int(input())
A = [list(map(int, input().split())) for _ in range(2)]

ans = 0
for i in range(N):
    sum = 0
    for j in range(i+1):
        sum += A[0][j]
    for j in range(i,N):
        sum += A[1][j]

    ans = max(ans, sum)

print(ans)



# N = int(input())
# A = [list(map(int, input().split())) for _ in range(2)]
# ans = [[0] * N for _ in range(2)]

# ans[0][0] = A[0][0]
# ans[1][0] = ans[0][0] + A[1][0]


# for i in range(N-1):
#     ans[0][i+1] = ans[0][i] + A[0][i+1]
#     ans[1][i+1] = max(ans[1][i] + A[1][i+1], ans[0][i+1] + A[1][i+1])


# print(ans[1][N-1])