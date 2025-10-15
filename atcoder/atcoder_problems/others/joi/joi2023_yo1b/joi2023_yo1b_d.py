N = int(input())
A = list(map(int, input().split()))
M = int(input())
B = list(map(int, input().split()))

B_set = set()
for i in range(M):
    B_set.add(B[i])

score = 0
for i in range(N):
    score += A[i]
    if score in B_set:
        score = 0

print(score)


# N = int(input())
# A = list(map(int, input().split()))
# M = int(input())
# B = list(map(int, input().split()))

# score = 0

# for i in range(N):
#     score += A[i]
#     for j in range(M):
#         if score == B[j]:
#             score = 0

# print(score)