N, M = map(int, input().split())
A = list(map(int, input().split()))

for i in range(N):
    A[i] -= 1

ans = 0
while True:
    exist = [False] * M
    for i in A:
        exist[i] = True

    ok = False
    for b in exist:
        if not b:
            ok = True
    
    if ok:
        break

    ans += 1
    A.pop()

print(ans)

# N, M = map(int, input().split())
# A = list(map(int, input().split()))

# A.reverse()

# for i in range(N+1):
#     for j in range(1,M+1):
#         if j not in A[i:]:
#             print(i)
#             exit()