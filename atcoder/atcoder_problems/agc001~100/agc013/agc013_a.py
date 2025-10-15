N = int(input())
A = list(map(int, input().split()))

res = 0
i = 0
while i < N:
    while i + 1 < N and A[i] == A[i+1]:
        i += 1

    if i +1 < N and A[i] < A[i+1]:
        while i +1 < N and A[i] <= A[i+1]:
            i += 1

    elif i + 1 < N and A[i] > A[i+1]:
        while i +1 < N and A[i] >= A[i+1]:
            i += 1

    res += 1
    i += 1

print(res)


#wrong ans
# N = int(input())
# A = list(map(int, input().split()))

# ans = 0
# for i in range(N-1):
#     if A[i] == A[i+1]:
#         continue
#     elif A[i] > A[i+1]:
#         if i >= 1 and A[i] > A[i-1]:
#             ans += 1


#     elif A[i] < A[i+1]:
#         if i >= 1 and A[i] < A[i-1]:
#             ans += 1


# print(ans)