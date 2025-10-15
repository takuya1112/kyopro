N = int(input())
A = list(map(int, input().split()))

called = [False] * N

for i in range(N):
    if called[i]: continue
    called[A[i]-1] = True


ans = []
for i in range(N):
    if not called[i]:
        ans.append(i+1)

print(len(ans))
for a in ans:
    print(a, end=" ")

print()


# N = int(input())
# A = list(map(int, input().split()))
# check = [False] * N

# for i in range(N):
#     if not check[i]:
#         check[A[i] -1] = True

# safe = []
# for i in range(N):
#     if not check[i]:
#         safe.append(i+1)

# print(len(safe))
# for s in safe:
#     print(s, end=" ")

# print()
