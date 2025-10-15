N = int(input())
A = list(map(int, input().split()))
X = int(input())
S = sum(A)

P = X // S

ans = P * N
now = P * S
for i in range(N):
    now += A[i]
    ans += 1
    if now > X:
        break

print(ans)

# N = int(input())
# A = list(map(int, input().split()))
# X = int(input())

# A_sum = sum(A)
# ans = 0
# ans += (X // A_sum) * N
# x = X % A_sum

# a = 0
# for i in range(N):
#     a += A[i]
#     if a > x:
#         ans += i +1
#         break

# print(ans)