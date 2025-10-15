N = int(input())
S = [input() for _ in range(N)]

ans = set()
for s in S:
    for t in S:
        if s != t:
            ans.add(s + t)
print(len(ans))

# N = int(input())
# S = [input() for _ in range(N)]
# s = set()
# for i in range(N):
#     for j in range(N):
#         if i == j: continue
#         s.add(S[i] + S[j])
# print(len(s))