N = int(input())
A = list(map(int, input().split()))
cnt = [0] * 100010

ans = 0
for i in range(N):
    if A[i] > N:
        ans += 1
    else:
        cnt[A[i]] += 1

for i in range(1, N+1):
    if cnt[i] < i:
        ans += cnt[i]
    else:
        ans += cnt[i] - i

print(ans)


# N = int(input())
# A = list(map(int, input().split()))
# count = {}

# for a in A:
#     if a not in count:
#         count[a] = 0
#     count[a] += 1


# ans = 0
# for i in count:
#     if i > count[i]:
#         ans += count[i]

#     elif i < count[i]:
#         ans += count[i] - i
# print(ans)