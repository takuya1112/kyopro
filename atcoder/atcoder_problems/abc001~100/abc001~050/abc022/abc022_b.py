N = int(input())
A = [int(input()) for _ in range(N)]
a = set(A)
print(N - len(a))


# N = int(input())
# flower = [False] * 100100

# ans = 0
# for i in range(N):
#     a = int(input())
#     a -= 1
#     if flower[a]:
#         ans += 1
#     flower[a] = True

# print(ans)