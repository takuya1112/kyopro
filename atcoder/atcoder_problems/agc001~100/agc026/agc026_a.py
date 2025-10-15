N = int(input())
A = list(map(int, input().split()))
cnt = 0
ans = 0
t = -1
for a in A:
    if a == t:
        cnt += 1
    else:
        ans += cnt // 2
        cnt = 1
    t = a
ans += cnt // 2
print(ans)


# N = int(input())
# A = list(map(int, input().split()))

# ans = 0
# for i in range(N-1):
#     if A[i] == A[i+1]:
#         A[i+1] = -1
#         ans += 1

# print(ans)