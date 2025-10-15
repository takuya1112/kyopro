N = int(input())
P = [0] * N
for i in range(N):
    a, b = map(int, input().split())
    P[i] = [b, a]
P.sort()

t = 0
for i in range(N):
    t += P[i][1]
    if t > P[i][0]:
        print("No")
        exit()

print("Yes")


# N = int(input())
# A = [0] * N
# B = [0] * N
# for i in range(N):
#     a, b = map(int, input().split())
#     A[i] = a
#     B[i] = b

# BA = []
# for i in range(N):
#     BA.append([B[i], A[i]])
# BA.sort()

# cnt = 0
# for i in range(N):
#     a, b = BA[i][1], BA[i][0]
#     cnt += a
#     if b < cnt:
#         print("No")
#         exit()

# print("Yes") 