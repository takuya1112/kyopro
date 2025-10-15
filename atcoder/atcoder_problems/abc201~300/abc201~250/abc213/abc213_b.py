N = int(input())
A = list(map(int, input().split()))

M1, M2 = (0, 0), (0, 0)
for i in range(N):
    X = (A[i], i+1)
    if X > M1:
        M2 = M1
        M1 = X
    elif X > M2:
        M2 = X
print(M2[1])


# N = int(input())
# A = list(map(int, input().split()))
# v = []

# for i in range(N):
#     v.append((A[i], i+1))
# v.sort(reverse=True)
# print(v[1][1])


# n = int(input())
# a = list(map(int, input().split()))
# b = sorted(a)
# for i in range(len(a)):
#     if a[i] == b[-2]:
#         print(i+1)
#         exit()