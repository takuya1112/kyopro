N = int(input())
A = list(map(int, input().split()))

last = {}
ans = []
for i in range(N):
    if A[i] in last: ans.append(last[A[i]])
    else: ans.append(-1)
    last[A[i]] = i+1

for b in ans:
    print(b, end=" ")
print()



# N = int(input())
# A = list(map(int, input().split()))

# Map = {}
# B = []
# for i in range(N):
#     if A[i] in Map:
#         B.append(Map[A[i]])
#     else:
#         B.append(-1)
#     Map[A[i]] = i+1

# for b in B:
#     print(b, end=" ")
# print()