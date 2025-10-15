# def solve(a, x):
#     a.sort(reverse=True)
#     for i in range(len(a)):
#         x -= a[i]
#         if x < 0:
#             return i + 1
#     return len(a)


# N, X, Y = map(int, input().split())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))
# ans = min(solve(A, X), solve(B, Y))
# print(ans)



#mycode
# N, X, Y = map(int, input().split())
# A = list(map(int, input().split()))
# B = list(map(int, input().split()))

# A.sort(reverse=True)
# B.sort(reverse=True)

# x = 0
# y = 0
# for i in range(N):
#     x += A[i]
#     y += B[i]
#     if X < x or Y < y:
#         print(i+1)
#         exit()


# print(N)