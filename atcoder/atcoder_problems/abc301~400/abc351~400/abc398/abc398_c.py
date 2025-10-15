N = int(input())
A = list(map(int, input().split()))

count = {}
for i in range(N):
    if A[i] not in count:
        count[A[i]] = 0
    count[A[i]] += 1


mx = -1
ans = -1
for i in range(N):
    if count[A[i]] >= 2: continue
    if mx < A[i]:
        mx = A[i]
        ans = i+1

print(ans)


# N = int(input())
# A = list(map(int, input().split()))

# count = {}
# for i in range(N):
#     if A[i] not in count:
#         count[A[i]] = []
#     count[A[i]].append(i)


# index = -1
# for c in count:
#     if len(count[c]) > 1:
#         continue
#     if index == -1:
#         index = count[c][0]

#     if A[count[c][0]] > A[index]:
#         index = count[c][0]

# if index == -1:
#     print(index)
#     exit()
# print(index+1)
