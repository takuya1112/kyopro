N = int(input())
S = []
Setsting = set()
for i in range(N):
    S.append(input())
    Setsting.add(S[i])

for i in range(N):
    if ("!" + S[i]) in Setsting:
        print(S[i])
        exit()

print("satisfiable")

# N = int(input())
# S = set()
# T = set()
# for _ in range(N):
#     s = input()
#     if s[0] == "!":
#         T.add(s[1:])
#     else:
#         S.add(s)

# for s in S:
#     if s in T:
#         print(s)
#         exit()

# print("satisfiable")