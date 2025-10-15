N, Q = map(int, input().split())
X = list(map(int, input().split()))

box = [0] * (N+1)

for i in range(Q):
    x = X[i]
    if x >= 1:
        box[x] += 1
        print(x, end=" ")
    
    else:
        y = 1
        for j in range(2, N+1):
            if box[y] > box[j]: y = j

        box[y] += 1
        print(y, end=" ")

print()




# N, Q = map(int, input().split())
# X = list(map(int, input().split()))

# B = [0] * N
# for i in range(Q):
#     if X[i] >= 1:
#         B[X[i]-1] += 1
#         print(X[i], end=" ")
#     else:
#         small = B[0]
#         index = 0
#         for j in range(N):
#             if small > B[j]:
#                 small = B[j]
#                 index = j
#         B[index] += 1
#         print(index+1, end=" ")
# print()