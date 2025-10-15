N, M = map(int, input().split())
S = [input() for _ in range(N)]
T = [input() for _ in range(M)]

ans = 0
for i in range(N):
    found = False
    for j in range(M):
        if S[i][-3:] == T[j]:
            found = True
    if found:
        ans += 1

print(ans)



# N, M = map(int, input().split())
# S = [input()[3:] for _ in range(N)]
# T = set()

# for _ in range(M):
#     t = input()
#     T.add(t)


# ans = 0
# for i in range(N):
#     if S[i] in T:
#         ans += 1
            
# print(ans)
