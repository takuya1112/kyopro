N = int(input())
S = [input() for i in range(N)]
map = {}

for i in range(0, N):
    if S[i] not in map:
        map[S[i]] = 1
        print(i+1)



# N = int(input())
# S = [input() for _ in range(N)]
# s = set()

# for i in range(N):
#     if S[i] not in s:
#         print(i+1)
#         s.add(S[i])

