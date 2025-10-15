N = int(input())
A = list(map(int, input().split()))

mp = {}
for i in range(N):
    a = A[i]
    if a not in mp:
        mp[a] = 0
    mp[a] += 1

ans = 0
for i in mp:
    ans += mp[i] // 2

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
#     ans += count[i] // 2

# print(ans)