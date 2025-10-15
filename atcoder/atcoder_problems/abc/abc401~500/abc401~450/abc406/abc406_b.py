N, K = map(int, input().split())
A = list(map(int, input().split()))


x,y=1,10**K-1
for i in range(N):
    x *= A[i]
    if x > y:
        x = 1

print(x)


# N, K = map(int, input().split())
# A = list(map(int, input().split()))

# ans = 1
# for i in range(N):
#     a = A[i]
#     ans = ans * a
#     if len(str(ans)) >= K +1:
#         ans = 1

# print(ans)


